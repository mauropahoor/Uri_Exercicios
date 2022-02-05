#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    int V;

    std::cin >> V;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "N[" << i << "] = " << V << '\n';
        V *= 2;
    }
}