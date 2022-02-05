#include <iostream>
#define TAM 12

int main ()
{
    std::ios::sync_with_stdio(false);

    double M[TAM][TAM], soma;
    int coluna;
    char opcao;

    std::cout << std::fixed;
    std::cout.precision(1);
    
    std::cin >> coluna;
    std::cin >> opcao;
    for(int i = 0; i < TAM; i++)
    {
        for(int j = 0; j < TAM; j++)
        {
            std::cin >> M[i][j];
        }
    }
    soma = 0;
    for (int i = 0; i < TAM; i++)
        soma += M[i][coluna];
    if(opcao == 'S')
        std::cout << soma << '\n';
    else if (opcao == 'M')
        std::cout << soma/TAM << '\n';    
}