#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n%4==0&&n%100!=0||n%400==0){
        cout << "1" << endl;
    }
    else {
        cout << "0" << endl;
    }
    return 0;
}
// Created by 86138 on 2024/3/17.
//
