#include <iostream>

int main () {

    std::ios::sync_with_stdio(false);

    double salario, porcentagem;

    std::cout << std::fixed;
    std::cout.precision(2);
    std::cin >> salario;
    if (salario <= 400.00 && salario >= 0.00)
    {
        std::cout << "Novo salario: " << (salario*0.15)+salario << '\n' 
        << "Reajuste ganho: " << 0.15*salario << '\n' 
        << "Em percentual: 15 %" << '\n';
    }
    else if (salario >= 400.01 && salario <= 800.00)
    {
        std::cout << "Novo salario: " << (salario*0.12)+salario << '\n'
        << "Reajuste ganho: " << 0.12*salario << '\n'
        << "Em percentual: 12 %" << '\n';
    }
    else if (salario >= 800.01 && salario <= 1200.00)
    {
        std::cout << "Novo salario: " << (salario*0.10)+salario << '\n'
        << "Reajuste ganho: " << 0.10*salario << '\n'
        << "Em percentual: 10 %" << '\n';
    }
    else if (salario >= 1200.01 && salario <= 2000.00)
    {
        std::cout << "Novo salario: " << (salario*0.07)+salario << '\n'
        << "Reajuste ganho: " << 0.07*salario << '\n'
        << "Em percentual: 7 %" << '\n';
    }
    else if (salario >= 2000.01)
    {
        std::cout << "Novo salario: " << (salario*0.04)+salario << '\n'
        << "Reajuste ganho: " << 0.04*salario << '\n'
        << "Em percentual: 4 %" << '\n';
    }

    
}