#include <iostream>

int main () {

char n[26];
double s, v;

std::cin >> n >> s >> v;
std::cout << std::fixed;
std::cout.precision(2);
std::cout << "TOTAL = R$ " << s+(v*0.15) << '\n';





}