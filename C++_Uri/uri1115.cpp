#include <iostream>

int main () 
{
    std::ios::sync_with_stdio(false);

    int X,Y;

    do
    {
        std::cin >> X >> Y;
        if (X > 0 && Y > 0) std::cout << "primeiro\n";
        else if (X > 0 && Y < 0) std::cout << "quarto\n";
        else if (X < 0 && Y < 0) std::cout << "terceiro\n";
        else if (X < 0 && Y > 0) std::cout << "segundo\n";

    } while (X != 0 && Y != 0);
    
}