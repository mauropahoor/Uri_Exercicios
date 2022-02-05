    #include <iostream>

    int main (){

        std::ios::sync_with_stdio(false);

        int DDD;

        std::cin >> DDD;
        if (DDD == 61)
        {
            std::cout << "Brasilia\n";
        }
        else if (DDD == 71)
        {
            std::cout << "Salvador\n";
        }
        else if (DDD == 11)
        {
            std::cout << "Sao Paulo\n";
        }
        else if (DDD == 21)
        {
            std::cout << "Rio de Janeiro\n";
        }
        else if (DDD == 32)
        {
            std::cout << "Juiz de Fora\n";
        }
        else if (DDD == 19)
        {
            std::cout << "Campinas\n";
        }
        else if (DDD == 27)
        {
            std::cout << "Vitoria\n";
        }
        else if (DDD == 31)
        {
            std::cout << "Belo Horizonte\n";
        }
        else
        {
            std::cout << "DDD nao cadastrado\n";
        }
        
    }