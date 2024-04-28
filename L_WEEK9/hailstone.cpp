#include <iostream>

using namespace std;

bool is_even(int x) {
    if (x % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    int i = 1;
    cout << i;
    while (1) {
        i = i * 2;
        cout << " " << i;
        if (i == n) {
            cout << " " << i;
            break;
        } else {
            if (is_even(i) && ((i - 1) % 3 == 0)) {
                i = (i - 1) / 3;
                cout << " " << i;
            } else {
                i = i * 2;
                cout << " " << i;
            }
        }
    }
    cout << endl;
    return 0;
}

//
// Created by 86138 on 2024/4/28.
//
