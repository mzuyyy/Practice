//
// Created by MZuy on 2/8/2023.
//
#include <iostream>

const int n = 100;


void printFor(){
    for (int i = 0; i < n; i += 2)
        std::cout << i << " ";
}
void printWhile(){
    int x = 0;
    while (x <= n){
        std::cout << x;
        x += 2;
    }
}
void printDoWhile(){
    int x = 0;
    do {
        std::cout << x;
        x += 2;
        }
    while (x <= n);
}

int main(){

}
//Theo em thì đáp án A có lẽ là tối ưu