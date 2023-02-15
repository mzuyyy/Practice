#include <iostream>
#include <bits/stdc++.h>
bool isPrime(int n){
    for (int i = 2; i < sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}
int main(){
    int n;
    std::cin >> n;
    if (isPrime(n)) std::cout << "yes";
    else std::cout << "no";
}