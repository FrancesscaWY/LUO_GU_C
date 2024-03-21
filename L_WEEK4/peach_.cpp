#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h,i,j,k;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    cin >> k ;

    int apples[10]={a,b,c,d,e,f,g,h,i,j};

    int Max_height=k+30;
    int count=0;

    for(int i=0;i<10;i++){
        if(apples[i]<=k){
            cout << apples[i] << endl;
            count++;
        } else if(apples[i]<=Max_height){
            count++;
        }
    }

     cout << count << endl;
    return 0;
}
// Created by 86138 on 2024/3/21.
//
