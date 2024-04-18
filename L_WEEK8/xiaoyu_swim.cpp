#include <iostream>
using namespace std;
int main(){
    double S;
    cin >> S;
    double count=1;
    double step_=2;
    double sum=count*step_;
    if(sum>S){
        cout << count << endl;
        return 0;
    }else {
        while (1) {
            count++;
            step_ = step_ * 0.98;
            sum += step_;
            if (sum >S) {
                cout << count << endl;
                break;
            }

        }
    }
    return 0;
}
//
// Created by 86138 on 2024/4/17.
//
