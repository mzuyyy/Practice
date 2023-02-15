//
// Created by MZuy on 2/8/2023.
//
#include <iostream>

double deFn(double k){
    double res = k;
    while (res > 3) {
        res /= 3;
    }
    return res;
}

int main(){
    double k;
    std::cin >> k;
    std::cout << deFn(k);
}