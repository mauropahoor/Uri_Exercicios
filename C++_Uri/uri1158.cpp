#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);
    int N;
    int x, y, soma, quantidade;
    
    soma = 0;
    quantidade = 0;
    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> x >> y;
        for (int i = x; quantidade < y;i++)
        {
            if (i % 2 != 0)
            {
                soma += i;
                quantidade++;
            }   
        }
        std::cout << soma << '\n';   
    }
}