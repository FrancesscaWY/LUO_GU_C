#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n,m,k,c,x,y,o,p,count=0;
int dx1[13]={-2,-1,-1,-1,0,1,1,1,2,0,0,0,0};
int dy1[13]={0,0,1,-1,0,0,1,-1,0,1,2,-1,-2};
int dx2[25]={-2,-2,-2,-2,-2,-1,-1,-1,-1,-1,0,0,0,0,0,1,1,1,1,1,2,2,2,2,2};
int dy2[25]={2,1,0,-1,-2,2,1,0,-1,-2,2,1,0,-1,-2,2,1,0,-1,-2,2,1,0,-1,-2};
int main(){
    cin >> n >> m >> k;
    int arr[n+5][n+5];
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=m;i++){
        cin >> x >> y;
        for(int j=0;j<13;j++){
            arr[x+dx1[j]][y+dy1[j]]=1;
        }
    }
    for(int i=1;i<=k;i++){
        cin >> o >> p;
        for(int j=0;j<25;j++){
            arr[o+dx2[j]][p+dy2[j]]=1;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(arr[i][j]==0){
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
//
// Created by 86138 on 2024/7/26.
//
