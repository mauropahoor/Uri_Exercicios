#include <iostream>

int main () {

std::ios::sync_with_stdio(false);

double x, y;

std::cout << std::fixed;
std::cout.precision(1);
std::cin >> x >> y;
if (x > 0.0 && y > 0.0)
{
    std::cout << "Q1\n";
}
else if (x > 0.0 && y < 0.0)
{
    std::cout << "Q4\n";
}
else if (x < 0.0 && y < 0.0)
{
    std::cout << "Q3\n";
}
else if (x < 0.0 && y > 0.0)
{
    std::cout << "Q2\n";
}
else if (x == 0.0 && y == 0.0)
{
    std::cout << "Origem\n";
}
else if (x == 0.0 && y != 0.0)
{
    std::cout << "Eixo Y\n";
}
else if (x != 0.0 && y == 0.0)
{
    std::cout << "Eixo X\n";
}

}