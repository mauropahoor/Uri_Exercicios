#include <iostream>

int main() {

    std::ios::sync_with_stdio(false);

    int x; 
    float a, b, c;

    std::cin >> x;
    for (int i = 0;i < x;i++){
    std::cin >> a >> b >> c;
    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << ((a*2)+(b*3)+(c*5))/10 << '\n';
    }

}