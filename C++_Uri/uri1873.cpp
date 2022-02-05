#include <iostream>
#include <string>

int main ()
{
    std::ios::sync_with_stdio(false);

    std::string sheldon, rajesh;
    int c;

    std::cin >> c;
    for (int i = 0; i < c; i++)
    {
        std::cin >> rajesh >> sheldon;
        if(rajesh == sheldon)  std::cout << "empate\n";
			else if(rajesh == "tesoura"  && sheldon == "papel") std::cout << "rajesh\n";
			else if(rajesh == "papel"    && sheldon == "pedra")  std::cout << "rajesh\n";
			else if(rajesh == "pedra"    && sheldon == "lagarto") std::cout << "rajesh\n";
			else if(rajesh == "lagarto"  && sheldon == "spock")  std::cout << "rajesh\n";
			else if(rajesh == "spock"    && sheldon == "tesoura")  std::cout << "rajesh\n";
			else if(rajesh == "tesoura"  && sheldon == "lagarto")  std::cout << "rajesh\n";
			else if(rajesh == "lagarto"  && sheldon == "papel") std::cout << "rajesh\n";
			else if(rajesh == "papel"    && sheldon == "spock")  std::cout << "rajesh\n";
			else if(rajesh == "spock"    && sheldon == "pedra")  std::cout << "rajesh\n";
			else if(rajesh == "pedra"    && sheldon == "tesoura")  std::cout << "rajesh\n";
        else  std::cout << "sheldon\n";
    }
}