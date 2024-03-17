#include <iostream>
using namespace std;
int main(){
    int m,s,t;
    cin >> m >> t >> s;
    if(t==0){
        cout << m << endl;
        return 0;
    }
    int n=s/t;
    if(m<=n){
        cout << 0 << endl;
    }
    else if(s%t==0){
        cout << m-n << endl;
    }
    else{cout << m - n - 1 << endl;}
    return 0;
}//
// Created by 86138 on 2024/3/17.
//
