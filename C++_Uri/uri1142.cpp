#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    int n;

    std::cin >> n;
    for(int i = 1;i <= n * 4 ;i++)
    {
        if (i%4 == 0) std::cout << "PUM\n";
        else std::cout << i << ' ';
    }
}