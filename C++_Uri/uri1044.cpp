#include <iostream>

int main () {

    int a, b;
    std::ios::sync_with_stdio(false);

    std::cin >> a >> b;
    if(a%b == 0||b%a == 0)
    {
        std::cout << "Sao Multiplos\n";
    }
    else
    {
        std::cout << "Nao sao Multiplos\n";
    }
}