#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    //创建一个int类型的动态·数组
    vector<string> data;
    string words;
    string x;
    string y[3];
    char c;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> y[j];
            data.push_back(y[j]);

        }
        if (data.size() == 3) {
            x = data[1];
            int x1 = stoi(x);
            x = data[2];
            int x2 = stoi(x);
            if (data[0] == "a") {
                int result = x1 + x2;
                cout << x1 << "+" << x2 << "=" << result << endl;
                c = 'a';
            } else if (data[0] == "b") {
                int result = x1 - x2;
                cout << x1 << "-" << x2 << "=" << result << endl;
                c = 'b';
            } else if (data[0] == "c") {
                int result = x1 * x2;
                cout << x1 << "*" << x2 << "=" << result << endl;
                c = 'c';
            }
            cout << data[1].size() + data[2].size() + 2;
        } else {
            x = data[0];
            int x1 = stoi(x);
            x = data[1];
            int x2 = stoi(x);
            int result;
            switch (c) {
                case 'a':
                    result = x1 + x2;
                    cout << x1 << "+" << x2 << "=" << result << endl;
                    break;
                case 'b':
                    result = x1 - x2;
                    cout << x1 << "-" << x2 << "=" << result << endl;
                    break;
                case 'c':
                    result = x1 * x2;
                    cout << x1 << "*" << x2 << "=" << result << endl;
                    break;
            }
            cout << data[0].size() + data[1].size() + 2;
        }
    }
    return 0;
}
//
// Created by 86138 on 2024/8/11.
//
