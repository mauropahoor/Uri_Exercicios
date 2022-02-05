#include <iostream>
#include <math.h>

int main () 
{
std::ios::sync_with_stdio(false);
double a, b, c;

std::cout << std::fixed;
std::cout.precision(1);
std::cin >> a >> b >> c;

if (fabs(b - c) < a && a < b + c)
{
    std::cout << "Perimetro = " << a+b+c << '\n';
}
else
{
    std::cout << "Area = " << (a+b)*c/2 << '\n';
}








}