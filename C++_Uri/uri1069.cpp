#include <iostream>
#include <stack>
#include <string>

int N, abertos, contador;

std::string sequencia;

int main     ()
{
    std::ios::sync_with_stdio(false);

    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::stack<char> pilha;

        std::cin >> sequencia; 
        for (int h = 0; h < sequencia.length(); h++)
        {
            if(sequencia[h] == '<') pilha.push('>');   
            else if ()
            {
                pilha.pop();
                contador++;
            }
        }
        
    }
}