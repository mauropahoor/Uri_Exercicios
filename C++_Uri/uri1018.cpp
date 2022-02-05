#include <iostream>

int main () {

    int n;
    int a, b, c, d, e, f, g;
    a=100, b=50, c=20, d=10, e=5, f=2, g=1;

    std::cin >> n;
    std::cout << n << '\n'
    << n/100 << " nota(s) de R$ 100,00\n" <<
     n%100 << " nota(s) de R$ 50,00\n" <<
     n/c << " nota(s) de R$ 20,00\n" <<
     n/d << " nota(s) de R$ 10,00\n" <<
     n/e << " nota(s) de R$ 5,00\n" <<
     n/f << " nota(s) de R$ 2,00\n" <<
     n/g << " nota(s) de R$ 1,00\n";
}