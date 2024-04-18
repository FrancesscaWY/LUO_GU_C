#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int Min=a[0];
    int Max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<Min){
            Min=a[i];
        }
        if(a[i]>Max){
            Max=a[i];
        }
    }

    int extremely_poor=Max-Min;
    cout << extremely_poor << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/18.
//
