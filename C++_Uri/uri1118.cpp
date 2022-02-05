#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    double x, r, y;

    do
    {
        do
        {
            std::cin >> x;
            if (x > 10 || x < 0)
            {
                std::cout << "nota invalida\n";
            }
        } while (x > 10 || x < 0);
        do
        {
            std::cin >> y;
            if (y > 10 || y < 0)
            {
                std::cout << "nota invalida\n";
            }
        } while (y > 10 || y < 0);
        std::cout << std::fixed;
        std::cout.precision(2);
        std::cout << "media = " << (x + y)/2 << '\n';
        do
        {
            std::cout << "novo calculo (1-sim 2-nao)\n";
            std::cin >> r;
        }
        while (r != 1 && r != 2); 
                    
    } while (r == 1);
    
}