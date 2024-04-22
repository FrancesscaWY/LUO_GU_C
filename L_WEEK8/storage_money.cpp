#include <iostream>

using namespace std;

int main() {
//    int size=12;
    int a[12];
    for (int i = 0; i < 12; i++) {
        cin >> a[i];
    }
    int girl = 0;
    int mom = 0;
    int count = 0;

    for (int j = 0; j < 12; j++) {
        count++;
        if (a[j] >(300 + girl)) {
            cout << "-" << count << endl;
            break;
        }
        if (a[j] <=(300 + girl)) {
            girl += 300 - a[j];
            int x = girl % 100;
            mom += (girl - x);
//            cout << mom << endl;
            girl = x;
//            cout << girl << endl;
        }
        if(count==12){
            double money_total = mom * (1 + 0.2) + girl;
            cout << money_total << endl;
        }
    }


    return 0;
}

//
// Created by 86138 on 2024/4/22.
//
