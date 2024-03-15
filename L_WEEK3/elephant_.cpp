#include <iostream>
#include <cmath>
using namespace std;
double const PI=3.14;
int main(){
    int h,r;
    double VOL;
    cin >> h >> r;
    VOL=PI*r*r*h;
    int result=20000/VOL;
    if(fmod(20000,VOL)!=0){
        result++;
    }
    cout << result << endl;
    return 0;
}
// Created by 8613#8 on 2024/3/15.
//
