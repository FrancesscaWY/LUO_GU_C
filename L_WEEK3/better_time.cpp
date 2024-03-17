#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int local_time=n*5;
    int luogu_time=n*3+11;
    if(local_time<=luogu_time){
        cout << "Local" << endl;
    }
    else{
        cout << "Luogu" << endl;
    }
    return 0;
}
// Created by 86138 on 2024/3/17.
//
