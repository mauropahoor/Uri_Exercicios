#include <iostream>

int main () {


std::ios::sync_with_stdio(false);

for (int i=1;i<=9;i += 2){

    for(int j=i+6;j>=i+4;j--){
        std::cout << "I=" << i;
        std::cout << " J=" << j<< '\n';
    }
}
}