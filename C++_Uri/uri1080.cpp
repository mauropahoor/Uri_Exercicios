#include <iostream>

int main () {

    std::ios::sync_with_stdio(false);

        int x;
        int aux = 0;
        int pos = 0;

    for (int i = 0;i < 5;i++)
    {
        std::cin >> x;
        if(x>aux) {
            aux = x;
            pos = i;
        }


    }
    std::cout << aux << '\n' << pos+1 << '\n';
}