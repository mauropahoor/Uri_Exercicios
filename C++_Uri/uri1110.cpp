#include <iostream>
#include <queue>
#include <vector>

int n;
std::queue<int> cartas;
std::vector<int> descartadas;

int main ()
{
    do
    {
        std::cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cartas.push(i);
        }
        while (cartas.size() != 1)
        {
            descartadas.push_back(cartas.front());
            cartas.pop();
            cartas.push(cartas.front());
            cartas.pop();
        }

        std::cout << "Discarded cards: ";
        for (int i = 0; i < descartadas.size() - 1; i++)
            std::cout << descartadas[i] << ',' <<' ';
        std::cout << descartadas.back();
        std::cout << "\nRemaining card: " <<cartas.front() << '\n';
        cartas.pop();
        descartadas.clear();
    } while (n != 0);
       
}