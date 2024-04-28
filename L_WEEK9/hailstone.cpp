#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> answer;//定义一个vector数组
    answer.push_back(n);
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
            answer.push_back(n);//将n的值加入到vector数组中
        } else {
            n = 3 * n + 1;
            answer.push_back(n);
        }
    }
    int len= answer.size();
    for(int i=len-1;i>=0;i--){
        cout << answer[i] << " ";
    }
    return 0;
}
//
// Created by 86138 on 2024/4/28.
//
