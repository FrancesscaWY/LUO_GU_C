#include <iostream>
#include <vector>

using namespace std;

int main() {
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    vector<int> sum;//vector数组，可改变大小
    for (int i = 1; i <= s1; i++) {
        for (int j = 1; j <= s2; j++) {
            for (int k = 1; k <= s3; k++) {
                sum.push_back(i + j + k);//将i+j+k的值存入sum数组中
            }
        }
    }
    int size = sum.size();//获取sum数组的长度

    //将sum数组赋值给a数组，方便后续进行比较得出最大概率对应的sum值
    int a[size];
    for (int h = 0; h < sum.size(); h++) {
        a[h] = sum[h];
    }

    //遍历数组，如果数组中有重复元素，将重复元素赋值为0
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == sum[j]) {
                sum[j] = 0;
            }
        }
    }
    //先赋值为0，再删除
    for (int i = 0; i < size; i++) {
        if (sum[i] == 0) {
            sum.erase(sum.begin() + i);//删除sum数组中的0元素
            i--;
        }
    }

    int len = sum.size();//获取去除重复元素后，sum数组的长度
    int p[len];//存储sum数组中元素出现的次数,表示概率
    for (int i = 0; i < len; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (sum[i] == a[j]) {
                count++;
            }
        }
        p[i] = count;
    }

    int max=sum[0];
    for (int i = 1; i < len; i++) {
        if(p[i]>p[i-1]){
            max=sum[i];
        }else if(p[i]==p[i-1]){
            if(sum[i]<max){
                max=sum[i];
            }
        }else{
            continue;
        }
    }
    cout << max;
    return 0;
}
//
// Created by 86138 on 2024/5/7.
//
