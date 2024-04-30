#include <bits/stdc++.h>
using namespace std;
const int N=25;
int A[N][N][N];
int a,b,c,d,e,f;
int l,w,h;
int n;
int sum;
void solve(){
    for(int i=a;i<=d;i++){
        for(int j=b;j<=e;j++){
            for(int k=c;k<=f;k++){
             A[i][j][k]=1;
            }
        }
    }
}
int main(){
    scanf("%d %d %d",&l,&w,&h);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
        solve();
    }
    for(int i=1;i<=l;i++){
        for(int j=1;j<=w;j++){
            for(int k=1;k<=h;k++){
                if(A[i][j][k]==0){
                    ++sum;
                }
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}