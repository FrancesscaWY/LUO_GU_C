#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    char h,m,n;
    int A,B=0,C=0;



    cin >> x >> y >> z;
    cin >> h >> m >> n;


    int number_array[3]={x,y,z};
    char char_array[3]={h,m,n};

    for(int i=0;i<3;i++){
        if(number_array[i]>C){
            C=number_array[i];
        }
    }
    A =number_array[0];
    for(int i=1;i<3;i++) {
        if (number_array[i] < A) {
           A = number_array[i];
        }
    }

    for(int i=0;i<3;i++){
        if((number_array[i]>A)&&(number_array[i]<C)){
            B=number_array[i];
        }
    }

    for(int i=0;i<3;i++){
        if(char_array[i]=='A'){
            cout << A << " ";
        }
        else if(char_array[i]=='B'){
            cout << B << " ";
        }
        else if(char_array[i]=='C'){
            cout << C << " ";
        }
    }
    return 0;
}