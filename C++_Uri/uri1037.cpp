#include <iostream>

int main () {

    std::ios::sync_with_stdio(false);

    double x;

    std::cin >> x;
    if (x >= 0 && x <= 25.0)
    {
        std::cout << "Intervalo [0,25]\n";
    }
    
    else if (x > 25.0 && x <= 50.0)
    {
        std::cout << "Intervalo (25,50]\n";
    }
    else if (x > 50.0 && x <= 75.0)
    {
        std::cout << "Intervalo (50,75]\n";
    }
    else if (x > 75.0 && x <= 100.0)
    {
        std::cout << "Intervalo (75,100]\n";
    }
    else
    {
        std::cout << "Fora de intervalo\n";
    }

}
