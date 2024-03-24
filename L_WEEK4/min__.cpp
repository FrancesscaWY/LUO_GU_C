//
// Created by 86138 on 2024/3/23.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int MIN = arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] < MIN)
            MIN = arr[i];
    }
    cout << MIN << endl;
    return 0;
}