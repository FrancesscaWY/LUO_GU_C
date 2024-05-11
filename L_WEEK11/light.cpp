#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int Lights[500001]={0};
    int n;
    cin >> n;
    double a[n];
    int t[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> t[i];
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=t[i];j++){
//            cout << a[i] << " "<< t[i] << endl;
            int x=static_cast<int>(floor(a[i]*j));//floor()函数返回不大于x的最大整数
            if(Lights[x]==0){
                Lights[x]=1;
            }else{
                Lights[x]=0;
            }
        }
    }
    for(int i=0;i<500001;i++){
        if(Lights[i]==1){
            cout << i;
        }
    }
    return 0;
}