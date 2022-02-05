#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    int n, x, a1 = 1, a2 = 0;

    std::cin >> n;
    if (n == 1) std::cout << a2 << '\n';
    else std::cout << a2 << ' ' << a1 << ' ';
    for (int i = 2; i < n; i++)
    {
        x = a1 + a2;
        a2 = a1;
        a1 = x;
        if (i == n - 1)   
        {
            std::cout << x;
        }
        else
        {
            std::cout << x << ' ';
        } 
    }
    std::cout << '\n';
}   