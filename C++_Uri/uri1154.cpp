#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    double n,soma = 0,quantidade = 0;

    do
    {
        std::cin >> n;
        if (n >= 0)
        {
            soma += n;
            quantidade += 1;
        }
    } while (n >= 0);
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << soma/quantidade << "\n";
}