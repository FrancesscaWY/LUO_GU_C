#include <iostream>
using namespace std;
int a[40][40],n;
int main(){
    cin >> n;
    int x=1,y=n/2+1;
    for(int i=1;i<=n*n;i++){
        a[x][y]=i;
        if(x==1&&y!=n) x=n,y++;
        else if(x!=1&&y==n) x--,y=1;
        else if(x==1&&y==n) x++;
        else if(x!=1&&y!=n){
            if(!a[x-1][y+1]) x--,y++;
            else x++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}












































































