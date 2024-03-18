#include <iostream>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;
    cin >> g >> h;
    cin >> i >> j;
    cin >> k >> l;
    cin >> m >> n;
    int MON=a+b;
    int TUE=c+d;
    int WED=e+f;
    int THU=g+h;
    int FRI=i+j;
    int SAT=k+l;
    int SUN=m+n;
    int happy[7]={MON,TUE,WED,THU,FRI,SAT,SUN};
    int unhappy[7];
    for(int i=0;i<7;i++){
        if(happy[i]>8){
            unhappy[i]=happy[i];
        }
        else{
            unhappy[i]=0;
        }
    }
    if (unhappy[0]==0&&unhappy[1]==0&&unhappy[2]==0&&unhappy[3]==0&&unhappy[4]==0&&unhappy[5]==0&&unhappy[6]==0){
        cout << 0 << endl;
        return 0;
    }
    int MAX=0;
    for(int j=0;j<7;j++){
//         MAX=unhappy[0];
        if(unhappy[j]>MAX){
            MAX=unhappy[j];
        }
    }
    for(int i=0;i<7;i++){
        if(MAX==unhappy[i]){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}

// Created by 86138 on 2024/3/18.
//
