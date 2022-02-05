#include <iostream>
#include <math.h>

int main () {

double x1, y1, x2, y2;
double distancia;

std::cin >> x1 >> y1 >> x2 >> y2;
distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
std::cout << std::fixed;
std::cout.precision(4);
std::cout << distancia << '\n';

}