#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    float n;

    for (int i = 0; i < 100; i++)
    {
        std::cin >> n;
        if (n <= 10)
        {
            std::cout << std::fixed;
            std::cout.precision(1);
            std::cout << "A[" << i << "] = " << n << '\n';
        }
    }
}