#include <iostream>

int main ()
{
    int x[10],y;

    for (int i = 0;i < 10; i++)
    {
        std::cin >> y;
        if (y <= 0) y = 1;
        std::cout << "X[" << i << "] = " << y << '\n';
    }
}