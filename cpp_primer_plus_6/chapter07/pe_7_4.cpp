#include <base.h>
/*
4. Many state lotteries use a variation of the simple lottery portrayed by Listing 7.4. In
these variations you choose several numbers from one set and call them the field
numbers. For example, you might select five numbers from the field of 1–47).You
also pick a single number (called a mega number or a power ball, etc.) from a sec-
ond range, such as 1–27.To win the grand prize, you have to guess all the picks cor-
rectly.The chance of winning is the product of the probability of picking all the
field numbers times the probability of picking the mega number. For instance, the
probability of winning the example described here is the product of the probability
of picking 5 out of 47 correctly times the probability of picking 1 out of 27 cor-
rectly. Modify Listing 7.4 to calculate the probability of winning this kind of lottery.
*/
double probability(int from, int got);
int main()
{
    int mega_ball = 27;
    int field_range = 47;
    int field_numbers = 5;
    double total = probability(field_range, field_numbers) * probability(mega_ball, 1);
    cout << "The probability of winning is " << total << endl;
    return 0;
}
double probability(int from, int got)
{
    cout << "The probability of picking " << got << " out of " << from << " correctly is ";
    double result = 1;
    while (got > 0)
    {
        cout << endl
             << "result = result *(" << got << "/" << from << ")"
             << endl;
        result = result * got / from;
        from--;
        got--;
    }
    cout << result << endl;
    return result;
};