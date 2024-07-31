#include <bits/stdc++.h>

using namespace std;
int n;
char a[15][15], b[15][15], c[15][15], d[15][15];

bool Tran1() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            b[j][n - i + 1] = a[i][j];

    }
//    注意这里return的位置，如果放在for循环里面，会导致只判断了第一个元素，就返回了，所以要放在for循环外面，这样才能判断完所有元素
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (b[i][j] != c[i][j])
                return false;
    return true;
}

bool Tran2() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            b[n - i + 1][n - j + 1] = a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (b[i][j] != c[i][j]) {
                return false;
            }
        }
    }
    return true;
}

bool Tran3() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            b[n - j + 1][i] = a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (b[i][j] != c[i][j])
                return false;
        }
    }
    return true;
}

bool Tran4() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            b[i][n - j + 1] = a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (b[i][j] != c[i][j]) {
                return false;
            }


        }
    }
    return true;
}

bool Tran5() {
    Tran4();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = b[i][j];
        }
    }
    if (Tran1()) {
        return true;
    }
    if (Tran2())
        return true;
    if (Tran3())
        return true;
    return false;
}

bool Tran6() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (b[i][j] != c[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void Tran() {
    if (Tran1()) {
        cout << 1 << endl;
        return;
    }
    if (Tran2()) {
        cout << 2 << endl;
        return;
    }
    if (Tran3()) {
        cout << 3 << endl;
        return;
    }
    if (Tran4()) {
        cout << 4 << endl;
        return;
    }
    if (Tran5()) {
        cout << 5 << endl;
        return;
    }
    if (Tran6()) {
        cout << 6 << endl;
        return;
    }
    cout << 7 << endl;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            d[i][j] = a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
        }
    }
    Tran();
    return 0;
}
//
// Created by 86138 on 2024/7/31.
//
