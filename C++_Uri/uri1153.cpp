#include <iostream>

int main ()
{
    int N, fat = 1;

    std::cin >> N;
    for (int i = 0; i < (N-1); i++)
    {
        fat *= N - i;
    }
    std::cout << fat << "\n";
    
}