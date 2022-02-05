#include <iostream>
#include <queue>

int n, v;
std::queue<int> vagoes;
std::priority_queue<int> vagoes2;

int main ()
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> v;
        vagoes.push(v);
        vagoes2.push(v);
    }
    if (vagoes == vagoes2)
    {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
    
    
    
}