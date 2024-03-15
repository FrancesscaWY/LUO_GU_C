#include <iostream>
#include <string>

using namespace std;

class CLOCK {
public:
    void set_time(int);

    void show_time() const;

private:
    int HOUR = 8;
    int MIN = 0;
};

void CLOCK::set_time(int x) {
    int h = x / 60;
    int m = x % 60;
    HOUR -= h;
    MIN -= m;
//    cout << "HOUR:" << HOUR << "MIN:" << MIN << endl;
    if (MIN < 0) {
        MIN += 60;
        HOUR -= 1;
    }
    if (HOUR < 0) {
        HOUR += 24;
    }

//    cout << "HOUR:" << HOUR << "MIN:" << MIN << endl;
}

void CLOCK::show_time() const {
    string temp;
    string hou = to_string(this->HOUR);
    string min = to_string(this->MIN);
    if (this->HOUR < 10) {
        temp += "0";
        temp += hou;
    } else {
        temp = hou;
    }
    temp += ":";
    if (this->MIN < 10) {
        temp += "0";
        temp += min;
    } else {
        temp += min;
    }
    cout << temp << endl;
}

int main() {
    int s;
    int v;
    int w_time;
    int time;
    cin >> s >> v;
    w_time = s / v;
    if (s % v != 0) {
        w_time += 1;
    }
    time = 10 + w_time;
    CLOCK clock1;
    clock1.set_time(time);
    clock1.show_time();
    return 0;
};//
// Created by 86138 on 2024/3/14.
//
