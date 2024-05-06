#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int min=0;
    for(int i=0;i<m;i++){
        min+=arr[i];
    }
    int sum=min;
    for(int i=m;i<n;i++){
        sum=sum-arr[i-m]+arr[i];
        if(sum<min){
            min=sum;
        }
    }
    cout << min;
    return 0;
}