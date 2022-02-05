#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double r;
    double b;
    b = 3.14159;

    std::cout << std::fixed;
    std::cout.precision(4);
    std::cin >> r;
    std::cout << "A=" << r*r*b << '\n';
    
        return 0;
}