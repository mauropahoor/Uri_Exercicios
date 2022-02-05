#include <iostream>

int main () {

    int x,y,q;

    std::ios::sync_with_stdio(false);

    std::cin >> q;
    for(int i=0;i<q;i++){
        int soma = 0;
        std::cin >> x >> y;
        if(y>x)
        {
            for(int i=x+1;i<y;i++)
            {
                if (i % 2 != 0) soma += i;
            }
        }
        else
        { 
            for(int i=y+1;x>i;i++)
            {
                if (i % 2 != 0) soma += i;
            }
        }
        std::cout << soma << '\n';

    }
    
}