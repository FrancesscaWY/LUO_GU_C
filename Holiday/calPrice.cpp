#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    double arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    double sum=0;
    for(int j=0;j<n;j++){
        sum+=arr[j];
    }
    cout << "Total Cost:  " << sum  << endl;
}

//
// Created by 86138 on 2024/8/6.
//
