#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    double A_arr[n];
    double B_arr[n];
    int num=1;
    int j=0,l=0;
    for(int i=0;i<n;i++){
     if(num%k==0){
         A_arr[j]=num;
         j++;
     }else{
         B_arr[l]=num;
            l++;
     }
        num++;
    }
    double sum1=0,sum2=0;
    for(int i=0;i<j;i++){
        sum1+=A_arr[i];
    }
    for(int i=0;i<l;i++){
        sum2+=B_arr[i];
    }
    double average1=sum1/j;
    double average2=sum2/l;

    printf("%.1f %.1f\n",average1,average2);
}
// Creater by 86138 on 2024/3/24.
//
