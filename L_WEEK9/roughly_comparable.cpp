#include <iostream>

using namespace std;

bool simi(int **a, int **b, int i, int j) {
    int counts = 0;
    int k = 0;
    for (; k < 3; k++) {
        if (a[i][k] - b[j][k] <= 5 && a[i][k] - b[j][k] >= -5) {
            counts++;
        }
    }
    if (counts == 3) {
        return true;
    } else {
        return false;
    }
}
//bool similar(int **a, int **b, int i, int j, int n) {
//    a[i][n];
//    b[j][n];
//    for (int k = 0; k < n; k++) {
//        if (a[i][k] - b[j][k] <= 5 || b[j][k] - a[i][k] <= 5) {
//            while (k = n - 1) {
//                return true;
//            }
//            continue;
//        } else {
//            return false;
//        }
//    }
//}

bool t_s(int *sum, int x, int y) {
    if (sum[x]-sum[y] <= 10 && sum[x]-sum[y] >= -10) {
        return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int size=3;
//    int scores[n][3];//定义一个二维数组
//定义一个二维数组指针
    int **scores = new int *[n];
    for (int i = 0; i < n; i++) {
        scores[i] = new int[size];
    }
    for (int i = 0; i < n; i++) {
        cin >> scores[i][0] >> scores[i][1] >> scores[i][2];
    }
    int count = 0;
    int sum[n];
    int *p = sum;
    for (int i = 0; i < n; i++) {
        p[i] = scores[i][0] + scores[i][1] + scores[i][2];
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (simi(scores, scores, i, j) && t_s(p, i, j)) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/29.
//
