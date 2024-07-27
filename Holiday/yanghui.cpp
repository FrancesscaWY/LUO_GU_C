#include <iostream>
using namespace std;
int arr[20][20];
int main(){
    int n;
    cin >> n;
    int i=1;
    for(i=1;i<=n;i++){
        arr[i][1]=1;
        arr[i][i]=1;
    }
    for(i=3;i<=n;i++){
        for(int j=2;j<=n-1;j++){
            arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
        }
    }

    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
//
// Created by 86138 on 2024/7/25.
//
