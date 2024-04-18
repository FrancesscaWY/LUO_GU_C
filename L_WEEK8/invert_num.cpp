#include <iostream>
#include <string.h>
using namespace std;
int main() {
    string str;
    string str0;
    cin >> str;
    int len = str.length();
    if((len==1)&&(str[0]=='0')){
        cout << '0' << endl;
    }
    if (str[0] == '-') {
        cout << str[0];
        for (int i = len - 1; i>0; i--) {
            if (i == len - 1) {
                while(str[i]=='0'){
                    i--;
                }
            }
            cout << str[i];
        }
    } else {
        for (int i = len - 1; i >= 0; i--) {
            if (i == len - 1) {
                while(str[i]=='0'){
                    i--;
                }
            }
            cout << str[i];
        }
    }

    return 0;
}
//
// Created by 86138 on 2024/4/17.
//
