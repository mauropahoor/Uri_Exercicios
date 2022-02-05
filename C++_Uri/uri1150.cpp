#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    int x, z, soma = 0, i;

    std::cin >> x;
    do
    {
        std::cin >> z;
    } while (z <= x);
    for (i = x; soma < z; i++)
    {
        soma += i;
    }
    std::cout << i - x << '\n'; 
 
}