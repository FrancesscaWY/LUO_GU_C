#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;

    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout << setfill('0') << setw(2) << num;
            num++;
            if(j==n-i-1) cout << endl;
        }
    }
    return 0;
}

// Created by 86138 on 2024/3/24.
//
