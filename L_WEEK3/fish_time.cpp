#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int H,M;
    if(d>=b){
        M=d-b;
        H=c-a;
    }
    else{
        d+=60;
        M=d-b;
        c-=1;
        H=c-a;
    }
    cout << H << " " << M << endl;
    return 0;
}
// Created by 86138 on 2024/3/15.
//
