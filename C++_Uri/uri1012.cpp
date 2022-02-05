#include <iostream>

int main () {

double a, b, c, pi;
pi = 3.14159;

std::cout << std::fixed;
std::cout.precision(1);
std::cin >> a >> b >> c;
std::cout << std::fixed;
std::cout.precision(3);
std::cout 
<< "TRIANGULO: " << (a*c)/2 << '\n' 
<< "CIRCULO: " << pi*c*c << '\n' 
<< "TRAPEZIO: " << (a+b)*c/2 << '\n' 
<< "QUADRADO: " << b*b << '\n' 
<< "RETANGULO: " << a*b 
<< '\n';


}