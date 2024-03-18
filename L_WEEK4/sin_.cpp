#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    long long  MAX, MIN;
    long long  arr[3] = {a, b, c};
    for (int i = 1; i < 3; i++) {
        MAX = arr[0];
        if (arr[i] > MAX) {
            MAX = arr[i];
        }
    }
    for (int j = 1; j < 3; j++) {
        MIN = arr[0];
        if (arr[j] < MIN) {
            MIN = arr[j];
        }//为什么不能判断大小，是因为数字太大了吗？
    }
    for (long long  k = 1; k <= MAX; k++) {
        if (MAX% k == 0 && MIN % k == 0) {
            MAX = MAX / k;
            MIN = MIN / k;
        }
    }
    cout << MIN << "/" << MAX << endl;
    return 0;
}
// Created by 86138 on 2024/3/18.
//
