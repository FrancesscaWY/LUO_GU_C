#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int day=0;
    while(a!=1){
        a=a/2;
        day++;
    }
    cout << day+1 << endl;
    return 0;
}
// Created by 86138 on 2024/3/24.
//
