#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int lovely_level[n];
    for(int i=0;i<n;i++){
        cin >> lovely_level[i];
    }
    for(int i=0;i<n;i++){
        int count=0;
        int j=0;
        while(j<=i){
            if(lovely_level[j]<lovely_level[i]){
                count++;
            }
            j++;
        }
        cout << count << " ";
    }
    cout << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/23.
//
