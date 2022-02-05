/*#include <iostream>

int main () {

double a, b, c, x;

std::ios::sync_with_stdio(false);

std::cout << std::fixed;
std::cout.precision(1);
std::cin >> a >> b >> c;

a > b > c;

if ( a >= b+c)
{
    std::cout << "NAO FORMA TRIANGULO\n";
}
else if (a*a == b*b + c*c)
{
    std::cout << "TRIANGULO RETANGULO\n";
}
else if (a*a > b*b + c*c)
{
    std::cout << "TRIANGULO OBTUSANGULO\n";
}
else if (a*a < b*b + c*c)
{
    std::cout << "TRIANGULO ACUTANGULO\n";
}
else if (a == b == c)
{
    std::cout << "TRIANGULO EQUILATERO\n";
}
else if (a == b || b == c || c == a)
{
    std::cout << "TRIANGULO ISOSCELES\n";
}



}
*/

#include <iostream>

using namespace std;

int main(){
    double a,b,c;

    cin >> a >> b >> c;

    if(a >= (b+c) || b >= (a+c) || c >= (a+b))
         cout << "NAO FORMA TRIANGULO\n";
    else if(a*a == (b*b + c*c) || b*b == (a*a + c*c) || c*c == (a*a + b*b))
           cout << "TRIANGULO RETANGULO\n";
    else if(a*a > (b*b + c*c) || b*b > (a*a + c*c) || c*c > (a*a + b*b))
           cout << "TRIANGULO OBTUSANGULO\n";
    else if(a*a < (b*b + c*c) || b*b < (a*a + c*c) || c*c < (a*a + b*b))
           cout << "TRIANGULO ACUTANGULO\n";
    if(a == b && a == c)
            cout << "TRIANGULO EQUILATERO\n";
    if((a == b && a != c)  || (a == c && a != b) || (b == c && b != a))
            cout << "TRIANGULO ISOSCELES\n";

    return 0;

}