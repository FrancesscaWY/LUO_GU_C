#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int y=n/52;
    if(n%52!=0){
        y++;
    }
    int k=1;
    bool flag=true;
    int x;
    while(flag){
        for(x=1;x<=100;x++) {
            int result=52*(7*x+21*k);
            if (result == n) {
                cout << x << endl;
                cout << k << endl;
                flag = false;
            }
        }
        k++;
        x=1;
    }
    return 0;
}
//
// Created by 86138 on 2024/4/22.
//
