#include <iostream>

int main () {

double x, y;

std::cin >> x >> y;
std::cout << std::fixed;
std::cout.precision(3);
std::cout << x/y << " km/l" << '\n';

}