#include <iostream>

int main () {

int a, b, maior, c, maior2;

std::cin >> a >> b >> c;
maior = (a+b+abs(a-b))/2;
std::cout << (maior + c + abs(maior-c)) / 2 << " eh o maior" << '\n';




}