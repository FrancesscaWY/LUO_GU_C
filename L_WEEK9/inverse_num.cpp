#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> fish_num;
    while(1){
        int i=0;
        int x;
        cin >> x;
        if(x==0){
            break;
        }
        fish_num.push_back(x);
        i++;
    }
    int number=fish_num.size();
    for(int i=number-1;i>=0;i--){
        cout << fish_num[i] << " ";
    }
    return 0;
 }
//
// Created by 86138 on 2024/4/23.
//
