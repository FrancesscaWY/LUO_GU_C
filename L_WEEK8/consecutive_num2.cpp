#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
//    int x=1000000000;
//    int *count=new int[x];
//    int* count=new int[n];
    vector<int> count(n, 0);//initialize the vector with n elements, each element is 0
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 0;
    int j = 0;
    while (1) {
        if (a[i] == (a[i + 1] - 1)) {
            count[j]++;
        }
        if (a[i] != (a[i + 1] - 1)) {
            j++;
        }
        if (i == n - 1) {
            break;
        }
        i++;
    }
//    int size=_msize(count)/sizeof(count[0]);
//    int size=count.size();
//    cout << size << endl;
    int Max = count[0];
    for (int k = 1; k < n; k++) {
        if (count[k] > Max) {
            Max = count[k];
        }
    }
    cout << Max + 1 << endl;

    return 0;
//delete[] count;
}
//
// Created by 86138 on 2024/4/21.
//
