#include  <iostream>
using namespace std;
int main(){
//     int a,b,c,d,e,f,g,h,i,j;
//     char k,l,m;
     int number_array[13];
//     char char_array[3];
     char str[13];
     cin >> str;

     for(int i=0;i<13;i++){
         if(str[i]!='-'){
             number_array[i]=str[i];
         } else{
             number_array[i]=0;
         }
     }
     int sum=0;
     int count=0;
     for(int i=0;i<11;i++){

         if(i==1||i==5){
             continue;
         } else {
             sum += number_array[i] * count;
             count++;
         }
     }

     int x=sum%11;
     if(x==number_array[12]){
         cout << "Right" << endl;
     } else{
         str[12]=x;
         cout << str << endl;
     }
        return 0;
}
// Created by 86138 on 2024/3/22.
//
