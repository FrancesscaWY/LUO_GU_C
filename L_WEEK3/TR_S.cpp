#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    double p=0.5*(a+b+c);
    double result= sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1lf",result);
//   cout << result << endl;
//    cout << round(result*10)/10 << endl;
    return 0;
}//
// Created by 86138 on 2024/3/14.
//
