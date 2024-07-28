#include <iostream>
using namespace std;
int main(){
    int n,num,t=0,i=0,count=0,index;
    cin >> n;
    while(count<n*n){
        i++;
        cin >> num;
        for(index=num;index>=1;index--){
            if(t==n){
                cout << endl;
                t=0;
            }
            if(i%2==0){
                cout << 1 ;
            }else{
                cout << 0;
            }
            t++;
            count++;
        }
    }
    return 0;
}
//
// Created by 86138 on 2024/7/27.
//
