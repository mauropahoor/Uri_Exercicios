#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    int i, i2; 
    double S = 1;

    for (i = 3, i2 = 2; i <= 39; i += 2, i2 *= 2) S += ((double) i)/i2;
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << S << '\n';
}