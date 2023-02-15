#include <iostream>
#include <cmath>

int main(){
    int n;
    std::cin >> n;
    for (int i = n - 1; i >= 0; i--){
        for (int j = -n + 1; j < n; j++){
            if (abs(j) > n - i - 1) std::cout << " ";
            else std::cout << "*";
        } std::cout << std::endl;
    }
}