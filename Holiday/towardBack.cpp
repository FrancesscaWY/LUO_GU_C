#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        //输出对应字母的后一个字母
        if(s[i]+n>122){
            cout << char(s[i]+n-26);
        }else {
            cout << char(s[i] + n);
        }
    }
    return 0;
}
//
// Created by 86138 on 2024/8/9.
//
