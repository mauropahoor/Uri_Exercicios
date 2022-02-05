#include <iostream>

int main () {

    int codigo, numerodepecas, codigo2, numerodepecas2;
    double valorunitario, valorunitario2;

    std::cin >> codigo >> numerodepecas;
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cin >> valorunitario;
    std::cin >> codigo2 >> numerodepecas2 >> valorunitario2;
    std::cout << "VALOR A PAGAR: R$ " << (numerodepecas*valorunitario)+(numerodepecas2*valorunitario2) << '\n'; 






}