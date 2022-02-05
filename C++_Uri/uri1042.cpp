#include <iostream>

int main () {

float a, b, c;

std::ios::sync_with_stdio(false);

std::cin >> a >> b >> c;
if (a > b && b > c)
{
    std::cout << c << '\n' << b << '\n' << a << '\n' << '\n' << a << '\n' << b << '\n' << c << '\n';
}
else if (b > a && a > c)
{
    std::cout << c << '\n' << a << '\n' << b << '\n' << '\n' << a << '\n' << b << '\n' << c << '\n';
}
else if (c > b && b > a)
{
    std::cout << a << '\n' << b << '\n' << c << '\n' << '\n' << a << '\n' << b << '\n' << c << '\n';
}
else if (a > c && c > b)
{
    std::cout << b << '\n' << c << '\n' << a << '\n' << '\n' << a << '\n' << b << '\n' << c << '\n';
}
else if (c > a && a > b)
{
    std::cout << b << '\n' << a << '\n' << c << '\n' << '\n' << a << '\n' << b << '\n' << c << '\n';
}
else if (b > c && c > a)
{
    std::cout << a << '\n' << c << '\n' << b << '\n' << '\n' << a << '\n' << b << '\n' << c << '\n';
}




}