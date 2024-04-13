#include <iostream>
using namespace std;

unsigned int query_c(const char* str,char c){
    unsigned int count=0;
    while(*str){
        if(*str==c){
            count++;
        }
        str++;
    }
    return count;
}
int main(){
    int n,x;
    cin >> n >> x ;
    string str;
    for(int i=1;i<=n;i++){
        str.append(to_string(i));
    }
    cout << query_c(str.c_str(),x+'0');
    return 0;
}
//
// Created by 86138 on 2024/4/13.
//
