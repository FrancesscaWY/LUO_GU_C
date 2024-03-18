#include <iostream>
using namespace std;
int main(){
    int n,A,a,B,b,C,c;
    cin >> n;
    cin >> A >> a;
    cin >> B >> b;
    cin >> C >> c;
    int price_A,price_B,price_C;
    if(n%A==0){
        price_A=n/A*a;
    }
    else{
        price_A=(n/A+1)*a;
    }
    if(n%B==0){
        price_B=n/B*b;
    }
    else{
        price_B=(n/B+1)*b;
    }
    if(n%C==0){
        price_C=n/C*c;
    }
    else{
        price_C=(n/C+1)*c;
    }
    int price[3]={price_A,price_B,price_C};
    int min=price[0];
    for(int i=1;i<3;i++){
        if(price[i]<min){
            min=price[i];
        }
    }
    cout << min << endl;
    return 0;
}
// Created by 86138 on 2024/3/18.
//
