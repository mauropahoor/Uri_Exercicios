#include <iostream>

int main () {

double n1,n2,n3,n4,media,n5,media2;

std::ios::sync_with_stdio(false);

std::cout << std::fixed;
std::cout.precision(1);
std::cin >> n1 >> n2 >> n3 >> n4;
std::cout << "Media: " << (n1*2 + n2*3 + n3*4 + n4*1)/10 << '\n';
media = (n1*2 + n2*3 + n3*4 + n4*1)/10;
if (media >= 7.0)
{
    std::cout << "Aluno aprovado.\n";
}
else if (media < 5.0)
{
    std::cout << "Aluno reprovado.\n";
}
else if (media >= 5.0 && media <= 6.9)
{
    std::cout << "Aluno em exame.\n";
    std::cin >> n5;
    std::cout << "Nota do exame: " << n5 << '\n';
    media2 = (media+n5)/2;
    if(media2 >= 5.0)
    {
        std::cout << "Aluno aprovado.\n" << "Media final: " << media2 << '\n';
    }
    else
    {
        std::cout << "Aluno reprovado.\n" << "Media final: "<< media2 << '\n';
    }
    
}














}