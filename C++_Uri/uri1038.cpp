#include <iostream>

int main () {

std::ios::sync_with_stdio(false);

int x,y;

std::cin >> x >> y;
std::cout << std::fixed;
std::cout.precision(2);
if (x == 1)
{
    std::cout << "Total: R$ " << 4.00*y << '\n';
}
else if (x == 2)
{
    std::cout << "Total: R$ " << 4.50*y << '\n';
}
else if (x == 3)
{
    std::cout << "Total: R$ " << 5.00*y << '\n';
}
else if (x == 4)
{
    std::cout << "Total: R$ " << 2.00*y << '\n';
}
else if (x == 5)
{
    std::cout << "Total: R$ " << 1.50*y << '\n';
}





}