#include <iostream>

int a, b, c, d;

int main () {

std::ios::sync_with_stdio(false);
std::cin >> a >> b >> c >> d;
if (b > c && d > a && c + d > a + b && c > 0 && d > 0 && a % 2 == 0){
    std::cout << "Valores aceitos\n";
}
    else
    {
    std::cout << "Valores nao aceitos\n";
    }
    


}