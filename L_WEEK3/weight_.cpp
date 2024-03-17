#include <iostream>
using namespace std;
int main(){
    double m,h;
    cin >> m >> h;
    double BIM=m/(h*h);
    if(BIM<18.5){
        cout << "Underweight" << endl;
    }
    else if(BIM>=18.5&&BIM<24){
        cout << "Normal" << endl;
    }
    else if(BIM>24){
        cout << BIM << endl;
        cout << "Overweight" << endl;
    }
    return 0;
}
// Created by 86138 on 2024/3/17.
//
