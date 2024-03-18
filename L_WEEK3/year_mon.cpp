#include <iostream>
using namespace std;
int main(){
    int y,m;
    cin >> y >> m;
    bool a=y%4==0&&y%100!=0||y%400==0;
    bool b=m%2==1&&m<=7||m%2==0&&m>=8;
    if(a==1){
        if(m==2){
            cout << 29 << endl;
        }
        else if(b==1){
            cout << 31 << endl;
        }
        else{
            cout << 30 << endl;
        }
    }
    else{
        if(m==2){
            cout << 28 << endl;
        }
        else if(b==1){
            cout << 31 << endl;
        }
        else{
            cout << 30 << endl;
        }
    }
    return 0;
}
// Created by 86138 on 2024/3/17.
//
