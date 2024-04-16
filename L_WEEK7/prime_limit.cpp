#include <iostream>
using namespace std;

bool is_prime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
    if(n%i==0){
        return false;
    }
    }
    return true;
}

int ReCount(int n){
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;
}
int main(){
    int a,b;
    cin >> a >> b;
    int palindrome_prime=0;
    for(int i= ReCount(a);i<=ReCount(b);i++){
        if(i==1){
            for(int j=a;j<10;j++){
                if(is_prime(j)){
                    cout << j << endl;
                }
            }
        }
        if(i==3){
            for(int dl1=1;dl1<=9;dl1++){
                for(int dl2=0;dl2<=9;dl2++){
                     palindrome_prime=+100*dl1+10*dl2+dl1;
                     if(is_prime(palindrome_prime)){
                         cout << palindrome_prime << endl;
                     }
                }
            }
        }
        if(i==5){
            for(int dl1=1;dl1<=9;dl1++){
                for(int dl2=0;dl2<=9;dl2++){
                    for(int dl3=0;dl3<=9;dl3++){
                        palindrome_prime=10000*dl1+1000*dl2+100*dl3+10*dl2+dl1;
                        if(is_prime(palindrome_prime)){
                            cout << palindrome_prime << endl;
                        }
                    }
                }
            }
        }
        if(i==7){
            for(int dl1=1;dl1<=9;dl1++){
                for(int dl2=0;dl2<=9;dl2++){
                    for(int dl3=0;dl3<9;dl3++){
                        for(int dl4=0;dl4<=9;dl4++){
                            palindrome_prime=1000000*dl1+100000*dl2+10000*dl3+1000*dl4+100*dl3+10*dl2+dl1;
                            if(is_prime(palindrome_prime)){
                                cout << palindrome_prime << endl;
                            }
                        }
                    }
                }
            }
        }
        if(i==9){
            for(int dl1=1;dl1<=9;dl1++){
                for(int dl2=0;dl2<=9;dl2++){
                    for(int dl3=0;dl3<=9;dl3++){
                        for(int dl4=0;dl4<=9;dl4++){
                            for(int dl5=0;dl5<=9;dl5++){
                                palindrome_prime=100000000*dl1+10000000*dl2+1000000*dl3+100000*dl4+10000*dl5+1000*dl4+100*dl3+10*dl2+dl1;
                                if(is_prime(palindrome_prime)){
                                    cout << palindrome_prime << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

//
// Created by 86138 on 2024/4/15.
//
