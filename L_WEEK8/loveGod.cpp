#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double n;
    cin >> n;
    double a=0;
    if(n==0){
        cout << fixed << setprecision(2) << a << endl;
        return 0;
    }
    double x = sqrt(5);
//    cout << x << endl;
    double y = (1 + x) / 2;
//    cout << y << endl;
    double z = (1 - x) / 2;
    double re1 = y;
    double re2 = z;
    for (double i = 1; i < n; i++) {
        re1 *= y;
        re2 *= z;
    }
    double fib = (re1 - re2) / x;
    cout << fixed << setprecision(2)<< fib << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/18.
//
