#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long int sum=0;
    for(int i=1;i<=n;i++){
        long long int factorial=1;
        for(int j=1;j<=i;j++) {
            factorial *= j;
        }
        sum+=factorial;
    }
    cout << sum << endl;
    return 0;
}
// Created by 86138 on 2024/3/24.
//
