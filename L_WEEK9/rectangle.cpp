#include <iostream>
using namespace std;
int main(){
    int total_t[3];
    for(int i=0;i<3;i++){
        cin >> total_t[i];
    }
    int n;
    cin >> n;
    int **box=new int*[n];
    for(int i=0;i<n;i++){
        box[i]=new int[3];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            cin >> box[i][j];
        }
    }
    int w[n];
    int h[n];
    int l[n];
    int v_box[n];
    int sum_v=0;
    for(int i=0;i<n;i++){
        l[i]=box[i][0]-box[i][3]+1;
        w[i]=box[i][1]-box[i][4]+1;
        h[i]=box[i][2]-box[i][5]+1;
        v_box[i] = l[i]*w[i]*h[i];
        sum_v+=v_box[i];
    }
//    int v_box[n];
    int V=total_t[0]*total_t[1]*total_t[2];
    cout << V-sum_v << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/29.
//
