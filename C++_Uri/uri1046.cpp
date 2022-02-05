#include <iostream>

int main () {

std::ios::sync_with_stdio(false);

int i, f;
std::cin >> i >> f;
if (i == f)
{
    std::cout << "O JOGO DUROU 24 HORA(S)\n";
}
else if (f > i)
{
    std::cout << "O JOGO DUROU " << f-i << " HORA(S)\n";
}
else
{
    std::cout << "O JOGO DUROU " << (f+24)-i << " HORA(S)\n";
}



}