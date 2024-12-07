#include <iostream>
#include <climits>
#include <cmath>
#include <cstdint>
#include <limits>

int f1(int n)
{
    return abs(n); // Good
}

int f2(int n)
{
    return std::abs(n); // Good
}
// __int128_t abs(__int128_t n)
// {
//     return n < 0 ? -n : n;
// }
// __int128_t f3(__int128_t n)
// {
//     return abs(n); // Bad
// }

// Wrong
// __int128_t f4(__int128_t n) {
//   return std::abs(n);
// }

int main()
{
    std::cout << "f1: " << f1(-42) << std::endl;
    std::cout << "f2: " << f2(-42) << std::endl;
    // std::cout << "f3: " << f3(-42) << std::endl;
    // Wrong
    // std::cout << "f4: " << f4(-42) << std::endl;
    // Wrong
    printf("max int32_t: %d\n", std::numeric_limits<int32_t>::max());
    printf("min int32_t: %d\n", std::numeric_limits<int32_t>::min());
    return 0;
}
