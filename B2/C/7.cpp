#include <iostream>

int main(){
    int a[100000], n;
    int countI = 0;
    std::cin >> n;
    a[0] = n;
    for (int i = 1;  n >= 0; i++){
        std::cin >> n;
        if (n == a[i - 1]) i--;
        else {
            a[i] = n;
            countI++;
        }
    }
    for (int i = 0; i <= countI; i++){
        std::cout <<  a[i] << " ";
    }
}