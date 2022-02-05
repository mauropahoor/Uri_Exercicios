#include <iostream>

int main ()
{
    std::ios::sync_with_stdio(false);

    int m,n,total;

    do
    {
        std::cin >> m >> n;
        if(m > 0 && n > 0)
        {
            total = 0;
            if (m > n)
            {
                for(int i = n;i <= m;i++)
                {
                    total +=i;
                    std::cout << i << ' ';
                }
            }
            else
            {
                for(int i = m;i <= n;i++)
                {
                    total += i;
                    std::cout << i << ' ';
                }
            }
            std::cout << "Sum=" << total << '\n';
        }
    }
    while(m > 0 && n > 0);
}