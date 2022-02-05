#include <iostream>


    int main () {

    float a, b, c;

    std::cin >> a >> b >> c;
    std::cout << std::fixed;
    std::cout.precision(1);
    std::cout << "MEDIA = " << (a*2+b*3+c*5)/10 << '\n';


}