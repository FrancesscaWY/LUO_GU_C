#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n==1||n==0){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cin >> s;
    int length=s.size();
    int arr[length];
    for(int i=0;i<length;i++){
        arr[i]=0;
        for(int j=-0;j<length;j++){
            if(s[i]==s[j]){
                arr[i]=arr[i]+1;
            }else{
                continue;
            }
        }
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<length;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    if(isPrime(max-min)){
        cout << "Lucky Word" << endl;
        cout << max-min << endl;
    }else{
        cout << "No Answer" << endl;
        cout << 0 << endl;
    }
    return 0;
}

//
// Created by 86138 on 2024/8/9.
//
