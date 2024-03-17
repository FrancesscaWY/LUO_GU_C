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
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
    } else if(T==4){
        double a=500;
        double b=3;
        double x=a/b;
        cout << x << endl;
//        printf("%.3lf\n",x);
        cout << fixed << x << setprecision(4) << endl;//这个是四舍五入
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
        double a=3;
        double b=4;
        double c=2;
        double r=5;
        double pi=3.141593;
        cout << c*pi*r << endl;
        cout << pi*r*r << endl;
        cout << (b/a)*pi*r*r*r << endl;
    }else if(T==9) {
        cout << 22 << endl;
    } else if(T==10){
        cout << 9 << endl;
    } else if(T==11){
        cout << 100.0/3 << endl;
    } else if(T==12){
        cout << 13 << endl;
        cout << "R" << endl;
    } else if(T==13){
        double a=4;
        double b=3;
        double c=10;
        double pi=3.141593;
        double y=a/b;
        double v1=y*pi*a*a*a;
        double v2=y*pi*c*c*c;
        double x= cbrt(v1+v2);
        int z=(int)x;
        cout << z << endl;
    } else if(T==14){
        cout << 50 << endl;
    }
    return 0;
}//
// Created by 86138 on 2024/3/15.
//
