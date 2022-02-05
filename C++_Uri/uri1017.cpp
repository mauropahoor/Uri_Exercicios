#include <iostream>

int main () {

int t;
float vm;

std::cin >> t >> vm;
std::cout << std::fixed;
std::cout.precision(3);
std::cout << t*vm/12 << '\n';

}