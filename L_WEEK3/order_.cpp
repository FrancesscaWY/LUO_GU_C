#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int* p1,int* p2){
    int tmp=*p1;
    *p1=*p2;
    *p2=tmp;
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b) swap(&a,&b);
    if(a>c) swap(&a,&c);
    if(b>c) swap(&b,&c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}
// Created by 86138 on 2024/3/17.
//
