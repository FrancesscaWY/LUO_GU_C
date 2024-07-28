#include <iostream>
using namespace std;
int main(){
    string wordTrix[205];
    char c='0';
    int count=0;
    cin >> wordTrix[0];

    for(int i=1;i<wordTrix[0].size();i++){
        cin >> wordTrix[i];
    }
    cout << wordTrix[0].size() << " ";
    for(int i=0;i<wordTrix[0].size();i++){
        for(int j=0;j<wordTrix[0].size();j++){
            if(wordTrix[i][j]==c){
                count++;
            }else{
                c=wordTrix[i][j];
                cout << count << " " ;
                count=1;
            }
        }
    }
    cout << count << endl;
    return 0;
}
//
// Created by 86138 on 2024/7/28.
//
