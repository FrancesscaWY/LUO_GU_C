#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!" << endl;
    } else if (T == 2) {
        cout << "6 4" << endl;
    } else if (T == 3) {
        int a = 14 / 4;
        int b = a * 4;
        int c = 14 % 4;
        cout << a << b << c << endl;
    } else if(T==4){
        double x=500/3;
        cout << fixed << x << setprecision(6) << endl;
    } else if(T==5){
        int t=(260+220)/(12+20);
        cout << t << endl;
    }else if(T==6){
        cout << sqrt(6*6+9*9) << endl;
    }else if(T==7){
       cout << 100+10 << endl;
       cout << 100+10-20 << endl;
       cout << 0 << endl;
    }else if(T==8){
        double r=5;
        double pi=3.141593;
        cout << 2*pi*r << endl;
        cout << pi*r*r << endl;
        cout << 4/3*pi*r*r*r << endl;
    }else if(T==9) {
        cout << 22 << endl;
    }
//    }else if(T==10){
//        cout <<
//    }
    return 0;
}//
// Created by 86138 on 2024/3/15.
//
