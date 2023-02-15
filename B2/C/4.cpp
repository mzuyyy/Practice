#include <iostream>
#include <cmath>

int main(){
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = -n + 1; j < n; j++){
            if (abs(j) < n - i) std::cout << "*";
            else std::cout << " ";
        } std::cout << std::endl;
    }
}