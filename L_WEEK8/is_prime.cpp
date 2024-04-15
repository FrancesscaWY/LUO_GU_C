#include <iostream>
using namespace std;
bool is_prime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){//i*i<=n is more efficient than i<=n/2
        if(n%i==0){//if n is divisible by i then n is not a prime number
            return false;
        }
    }
    return true;
}
int main(){
    int L;
    cin >> L;
    int count=0;
    int sum=0;
    int i=0;
    while(1){
        i++;
        if(is_prime(i)){
            sum+=i;
            if(sum>L){
                break;
            }
            cout << i << endl;
            count++;
        }

    }
    cout << count << endl;

    return 0;
}

//
// Created by 86138 on 2024/4/15.
//
