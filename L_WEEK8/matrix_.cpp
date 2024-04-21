#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i=1;i<=n*n;i++){
        cout << setw(2) << setfill('0') << i ;
        if(i%n==0){
            cout << endl;
        }
    }

    cout << endl;
    int x=1;
    int y=1;
    for(int i=0;i<n;i++){
        for(int j=n;j>0;j--){
            if(j<=y){
                cout << setw(2) << setfill('0') << x;
                x++;
            }else{
                cout << "  ";
            }
        }
        cout << endl;
        y++;
    }
    return 0;
}
//
// Created by 86138 on 2024/4/21.
//
