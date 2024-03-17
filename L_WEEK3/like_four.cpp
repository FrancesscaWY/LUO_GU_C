#include <iostream>
using namespace std;
int main(){
    int x;
    bool a,b;
    cin >> x;
    a=x%2==0;//a=1
    b=x>4&&x<=12;
    printf("%d %d %d %d\n",(a&b),(a|b),(a^b),!a&!b);
//    cout << a&&b << a||b << a^b << !a&!b ;
    return 0;
}
// Created by 86138 on 2024/3/17.
//
