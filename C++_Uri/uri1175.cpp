#include <iostream>
#define TAM 20

int main ()
{
    std::ios::sync_with_stdio(false);

    int x[TAM];

    for (int i = 0; i < TAM; i++)
        std::cin >> x[i];
    for (int i = TAM - 1; i >= 0; i--)
        std::cout << "N[" << (TAM-1)-i << "] = " << x[i] << '\n';
}