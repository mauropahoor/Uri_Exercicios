#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    double r, s, c, x, q;
    char t;

    std::cin >> x;
    for (int i = 1;i<=x;i++)
    {
        std::cin >> q >> t;
        if (t == 'C') c += q;
        if (t == 'S') s += q;
        if (t == 'R') r += q;
    }
    std::cout << "Total: " << r+s+c << " cobaias\n"
    << "Total de coelhos: " << c << '\n'
    << "Total de ratos: " << r << '\n'
    << "Total de sapos: " << s << '\n';
    std::cout << std::fixed;
    std::cout.precision(2);
    std::cout << "Percentual de coelhos: " << c/(r+s+c)*100.00 << " %\n"
    << "Percentual de ratos: " << r/(r+s+c)*100.00 << " %\n"
    << "Percentual de sapos: " << s/(r+s+c)*100.00 << " %\n";

    
}