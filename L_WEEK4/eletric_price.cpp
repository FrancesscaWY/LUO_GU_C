#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    double y;
    if(x<=150){
        y=x*0.4463;
        printf("%.1f\n",y);
    } else if(x>=151&&x<=400){
        y=150*0.4463+(x-150)*0.4663;
        printf("%.1f\n",y);
    } else if(x>=401){
        y=150*0.4463+250*0.4663+(x-400)*0.5663;
        printf("%.1f\n",y);
    }
    return 0;
}
// Created by 86138 on 2024/3/18.
//
