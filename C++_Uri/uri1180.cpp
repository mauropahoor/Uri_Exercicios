#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    int n, pos, aux;

    pos = 0;
    aux = 1000;

    std::cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> x[i];
        if (x[i] < aux)
        {
            aux = x[i];
            pos = i;
        }
    }
    std::cout << "Menor valor: " << aux << '\n';
    std::cout << "Posicao: " << pos << '\n';
}