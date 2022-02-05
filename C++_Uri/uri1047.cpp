#include <iostream>

int main () {

std::ios::sync_with_stdio(false);

int Hi, Hf, Mi, Mf, inicioemMinutos, fimemMinutos;

std::cin >> Hi >> Mi >> Hf >> Mf;

inicioemMinutos = (60*Hi)+Mi;
fimemMinutos = (60*Hf)+Mf;

if (fimemMinutos > inicioemMinutos)
{
    std::cout << "O JOGO DUROU " << (fimemMinutos - inicioemMinutos)/60 <<  " HORA(S) E " 
    << (fimemMinutos - inicioemMinutos)%60 <<  " MINUTO(S)\n";
}
else
{
    std::cout << "O JOGO DUROU " << ((60*24) - (inicioemMinutos - fimemMinutos))/60 << " HORA(S) E " 
    << ((60*24) - (inicioemMinutos - fimemMinutos))%60 << " MINUTO(S)\n"; 
}

}