#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    int U[10][5][3]={
            {
                'X','X','X',
                'X','.','X',
                'X','.','X',
                'X','.','X',
                'X','X','X'
            },
            {
                '.','.','X',
                '.','.','X',
                '.','.','X',
                '.','.','X',
                '.','.','X'
            },
            {
                'X','X','X',
                '.','.','X',
                'X','X','X',
                'X','.','.',
                'X','X','X'
            },
            {
                'X','X','X',
                '.','.','X',
                'X','X','X',
                '.','.','X',
                'X','X','X'
            },
            {
                'X','.','X',
                'X','.','X',
                'X','X','X',
                '.','.','X',
                '.','.','X'
            },
            {
                'X','X','X',
                'X','.','.',
                'X','X','X',
                '.','.','X',
                'X','X','X'
            },
            {
                'X','X','X',
                'X','.','.',
                'X','X','X',
                'X','.','X',
                'X','X','X'
            },
            {
                'X','X','X',
                '.','.','X',
                '.','.','X',
                '.','.','X',
                '.','.','X'
            },
            {
                'X','X','X',
                'X','.','X',
                'X','X','X',
                'X','.','X',
                'X','X','X'
            },
            {
                'X','X','X',
                'X','.','X',
                'X','X','X',
                '.','.','X',
                'X','X','X'
            }
    };
    char screen[5][1024];
    memset(screen,'.',static_cast<size_t>(5*1024));
    string s;
    int n;
    cin >> n;
    cin >> s;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<3;k++){
                screen[j][k+(i*4)]=U[(s[i]-'0')][j][k];
            }
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<n*4-1;j++){
            cout << screen[i][j];
        }
        cout << endl;
    }
    return 0;
}
//
// Created by 86138 on 2024/5/1.
//
