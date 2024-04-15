#include <iostream>
using namespace std;
bool not_even(int n){
    if(n%2!=0){
        return true;
    }
    return false;
}
int main(){
    int a,b;
    cin >> a >> b;
    int palindrome_prime=0;
    for(int i=a;i<=b;i++){
        if(not_even(i)){
            while(1){
              for(int dv=1,n=a-1;dv<=9;dv++){
                  palindrome_prime+=10*(i/n)*dv;
                  n--;
              }
            }
        }
    }
}
//
// Created by 86138 on 2024/4/15.
//
