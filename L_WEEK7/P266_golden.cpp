#include <iostream>
using namespace std;
int main(){
    int k;
    cin >> k;
    int golden_S=0;
    int i=1;
    int sum_day=0;
    while(1){
        sum_day += i;
        golden_S += i*i;
        if(k<sum_day){
            golden_S -=(sum_day-k)*(i);
            break;
        }
        if(k==sum_day){
            break;
        }
        i++;
    }
    cout << golden_S << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/13.
//
