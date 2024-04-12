#include <iostream>
#include  <wchar.h>
#include <string.h>

using namespace std;

int main() {
    char x[10];
    int y[10];
    memset(x, 'x', sizeof(x)-2);
    x[8]='a';
    cout << x << endl;
    for (int i = 0; i < 10; i++) {
        cout << x[i];
    }
    cout << endl;
    cout << x << endl;

    memset(y,4,sizeof(y));
    for(int i=0;i<10;i++){
        cout << y[i];
    }
    cout << endl;

    return 0;
}
//
// Created by 86138 on 2024/4/12.
//
