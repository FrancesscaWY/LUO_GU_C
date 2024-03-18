#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b>c&&a+c>b&&b+c>a) {
        if (a == b && b == c) {
            cout << "Acute triangle" << endl;
            cout << "Isosceles triangle" << endl;
            cout << "Equilateral triangle" << endl;
        }else if (a == b || a == c || b == c) {
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                cout << "Right triangle" << endl;
            } else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a) {
                cout << "Obtuse triangle" << endl;
            } else {
                cout << "Acute triangle" << endl;
            }
            cout << "Isosceles triangle" << endl;
        } else {
            if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
                cout << "Right triangle" << endl;
            } else if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a) {
                cout << "Obtuse triangle" << endl;
            } else {
                cout << "Acute triangle" << endl;
            }
        }
    }
    else{
        cout << "Not triangle" << endl;
    }
}//
// Created by 86138 on 2024/3/18.
//
