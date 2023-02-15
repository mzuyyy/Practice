#include <iostream>

int main(){
    int n;
    std::cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= i + n - 1; j++){
            if(j <= n) std::cout << j << " ";
            else std::cout << j % n << " ";
       } std::cout << std::endl;
    }
}