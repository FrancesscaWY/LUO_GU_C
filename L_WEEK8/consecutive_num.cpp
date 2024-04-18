#include <iostream>
#include <cstring>

using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    if(n==0){
        cout << 1 << endl;
        return 0;

    }
//    memset(a, 0, sizeof(a)*sizeof(a[0]));
    for(int i=0;i<n;i++){
        cin >> a[i];
//        cout << a[i] << endl;
    }
    int i=0;
//    string count;
    int count[n];
    int c_=1;
    int j=0;
    while(1){
        if(a[i]==(a[i+1]-1)){
            c_++;
//            cout << c_ << endl;
        }
         if(a[i]!=(a[i+1]-1)){
//            string c=to_string(c_);
//            cout << c << endl;
//            count.push_back(c[0]);
            count[j]=c_;
            cout << count[j] << endl;
            c_=1;
            j++;
        }

        if(i==n-1){
            break;
        }
        i++;
    }
//    cout << count << endl;
//    int Max=count[0]-'0';
//    cout << Max << endl;
      int Max=count[0];
//    int len=count.length();
    for(int k=1;k<=j;k++){
        if(count[k]>Max){
            Max=count[k];
        }
    }
    cout << Max << endl;
    return 0;
}
//
// Created by 86138 on 2024/4/18.
//
