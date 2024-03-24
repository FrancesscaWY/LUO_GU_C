#include  <iostream>
using namespace std;
int main(){
    string str_1;
    cin >> str_1;

    int sum=0;
    int count=1;
    int result;
    char y;
    for(int i=0;i<12;i++){
        if(i==1||i==5||i==11){
            continue;
        } else {
            result= (str_1[i]-'0') * count;
            sum += result;
            count++;
        }
    }
    int x=sum%11;
    if(x==10){
        y='X';
    } else{
        y =char(x+'0');
    }
    if(y==str_1[12]){
        cout << "Right" << endl;
    } else{
        str_1[12]=y;
        cout << str_1 << endl;
    }
    return 0;
}
// Created by 86138 on 2024/3/22.
//

// Created by 86138 on 2024/3/22.
//
