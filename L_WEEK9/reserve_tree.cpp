#include <iostream>
#include <vector>

using namespace std;

int main() {
    int l, m;
    cin >> l >> m;
    int area[m][2];
    for (int i = 0; i < m; i++) {
        cin >> area[i][0] >> area[i][1];
    }
    vector<int> tree(l + 1, 1);
    while (m--) {
        for (int i = area[m][0]; i <=area[m][1]; i++) {
            tree[i] = 0;
        }
    }
    int sum = 0;
    for (int i = 0; i < l + 1; i++) {
        sum += tree[i];
    }
    cout << sum << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/28.
//
