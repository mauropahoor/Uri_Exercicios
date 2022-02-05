#include <iostream>
#define TAM 12

int main ()
{
    std::ios::sync_with_stdio(false);

    char opcao;
    double M[TAM][TAM], soma;

    std::cin >> opcao;
    std::cout << std::fixed;
    std::cout.precision(1);
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            std::cin >> M[i][j];
            if (j > (TAM - 1) - i)
                soma += M[i][j];
        }
    }
    if (opcao == 'S')
        std::cout << soma << '\n';
    else if (opcao == 'M')
        std::cout << soma/66.0 << '\n';   
}