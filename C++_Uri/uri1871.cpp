#include <iostream>
#include <string>

int main ()
{
    std::ios::sync_with_stdio(false);

    int M, N, R;
    
    do
    {
        std::cin >> M >> N;
        if (M != 0 || N != 0)
        {
            R = M + N;
            std::to_string(35);
            std::cout << R << '\n';
        }
        else break;
    } while (M != 0 || N != 0);
    
}