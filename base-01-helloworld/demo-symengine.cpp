
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "gmpxx.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

/* A simple but slow primality test.  */
int prime_p(unsigned long n)
{
    unsigned long i, limit;

    if (n == 2)
        return 1;
    if (n < 2 || !(n & 1))
        return 0;

    limit = (unsigned long)floor(sqrt((double)n));
    for (i = 3; i <= limit; i += 2)
        if ((n % i) == 0)
            return 0;

    return 1;
}

/* The formula is as follows, with d < 0.

           w * sqrt(-d)      inf      p
    h(d) = ------------ *  product --------
          2 * pi         p=2   p - (d/p)


   (d/p) is the Kronecker symbol and the product is over primes p.  w is 6
   when d=-3, 4 when d=-4, or 2 otherwise.

   Calculating the product up to p=infinity would take a long time, so for
   the estimate primes up to 132,000 are used.  Shanks found this giving an
   accuracy of about 1 part in 1000, in normal cases.  */

unsigned long p_limit = 132000;

double
qcn_estimate(mpz_t d)
{
    double h;
    unsigned long p;

    /* p=2 */
    h = sqrt(-mpz_get_d(d)) / M_PI * 2.0 / (2.0 - mpz_kronecker_ui(d, 2));

    if (mpz_cmp_si(d, -3) == 0)
        h *= 3;
    else if (mpz_cmp_si(d, -4) == 0)
        h *= 2;

    for (p = 3; p <= p_limit; p += 2)
        if (prime_p(p))
            h *= (double)p / (double)(p - mpz_kronecker_ui(d, p));

    return h;
}

void qcn_str(char *num)
{
    mpz_t z;

    mpz_init_set_str(z, num, 0);

    if (mpz_sgn(z) >= 0)
    {
        mpz_out_str(stdout, 0, z);
        printf(" is not supported (negatives only)\n");
    }
    else if (mpz_fdiv_ui(z, 4) != 0 && mpz_fdiv_ui(z, 4) != 1)
    {
        mpz_out_str(stdout, 0, z);
        printf(" is not a discriminant (must == 0 or 1 mod 4)\n");
    }
    else
    {
        printf("h(");
        mpz_out_str(stdout, 0, z);
        printf(") approx %.1f\n", qcn_estimate(z));
    }
    mpz_clear(z);
}

int main(int argc, char *argv[])
{
    int i;
    int saw_number = 0;

    for (i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "-p") == 0)
        {
            i++;
            if (i >= argc)
            {
                fprintf(stderr, "Missing argument to -p\n");
                exit(1);
            }
            p_limit = atoi(argv[i]);
        }
        else
        {
            qcn_str(argv[i]);
            saw_number = 1;
        }
    }

    if (!saw_number)
    {
        /* some default output */
        qcn_str("-85702502803");          /* is 16259   */
        qcn_str("-328878692999");         /* is 1499699 */
        qcn_str("-928185925902146563");   /* is 52739552 */
        qcn_str("-84148631888752647283"); /* is 496652272 */
        return 0;
    }

    return 0;
}
