#include <iostream>
#include <vector>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    vector<int> sum;
    int h = 0;
    //将数组中任意连个元素结果相加存入sum数组中
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            sum.push_back(add(arr[i],arr[j]));
            h++;
        }
    }
    //遍历数组，如果数组中有元素等于sum数组中的元素，count++
    //去除sum重复元素
    for(int i=0;i<h;i++){
        for(int j=i+1;j<h;j++){
            if(sum[i]==sum[j]){
                sum.erase(sum.begin()+j);
                h--;
            }
        }
    }
    //遍历数组，如果数组中有元素等于sum数组中的元素，count++
    int single_count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < h; j++) {
            if (arr[i] == sum[j]) {
                single_count++;//记录arr[i]在sum数组中出现的次数,如果大于1，说明arr[i]在sum数组中出现了多次
                if(single_count>1){
                    break;
                }else{
                    count++;
                }
            }
        }
        single_count = 0;
    }
    cout << count;
    return 0;
}
//
// Created by 86138 on 2024/5/6.
//
