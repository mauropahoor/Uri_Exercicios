#include <iostream>

int main () {
    
    std::ios::sync_with_stdio(false);

    int N;

    std::cin >> N;
    for(int i = 2;i <= N;i += 2)
    {
        std::cout << i << "^2 = " << i*i << '\n';
    }
}