#include <iostream>
#define MAXE 7

int V, E;

std::pair<int, int> arestas[MAXE];

int main ()
{
    std::ios::sync_with_stdio(false);

    int t, n;

    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        std::cin >> V >> E;
        for(int i = 0; i < E; i++)
        {
            int vA, vB;
            std::cin >> vA >> vB;
            arestas[i] = {vA, vB};
        }
    }
}