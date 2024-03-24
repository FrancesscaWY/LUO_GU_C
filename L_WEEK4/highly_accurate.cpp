//#include <iostream>
//#include <cstring>
//#include <cstdio>
//using namespace std;
//
//#define N 101
//char S[N];
//int B;
//struct big_number{
//    int len,x[N];
//    big_number(){
//        len=0;
//        memset(x,0,sizeof(x));//初始化
//    }
//    void pint(){
//        for(int i=len;i<=1;i--){
//            printf("%d",x[i]);
//            puts("");
//        }
//    }
//}a,c;
//     big_number fix(big_number a){
//         for(int i=1;i<a.len;++i){
//             a.x[i+1]+=a.x[i]/10;//进位
//             a.x[i]%=10;//取余
//         }
//         return a;
//     }
//
//     inline big_number operator+(big_number a,int b){
//         a.x[1]+=b;
//         return fix(a);
//     }
//int main(){
//    scanf("%s%d",S+1,&B);
//    int lens=strlen(S+1);//字符串长度
//    a.len=lens;
//    for(int i=1;i<=lens;i++){
//        a.x[i]=S[lens-i+1]-'0';//倒序存储
//        cout << a.x[i] << endl;
//    }
//    c= a + B;
//
//    cout << c.x[3] << endl;
//    c.pint();
//    return 0;
//}
//// Created by 86138 on 2024/3/24.
////
#include <stdio.h>
#include <string.h>
#include <math.h>

#define LEN 101

struct hp{
    char str[LEN];
    int a[LEN];
};

void init(struct hp *x){
    for(int i=0;i<LEN;i++){
        x->a[i]=0;
        x->str[i]='\0';
    }
}

void in(struct hp *x){
    scanf("%s",&x->str);
    int len=strlen(x->str);
    for(int i=0;i<len;++i){
        x->a[i]=x->str[len-i-1]-'0';
    }
}

void add(struct hp x,struct hp y,struct hp *xy){
    int len = 0;
    if(strlen(x.str)>strlen(y.str))
        len = strlen(x.str);
    else len = strlen(y.str);

    for(int i=0;i<len;++i){
        xy->a[i]+=x.a[i]+y.a[i];
        while(xy->a[i]>=10){
            xy->a[i]-=10;
            xy->a[i+1]++;
        }
    }
}

void show(struct hp xy){
    int j=LEN-1;
    while(xy.a[j]==0&&j>=1) --j;

    while(j>0) {
        printf("%d",xy.a[j]);
        --j;
    }
    printf("\n");
}

//highly accurate multiplication
void multi(struct hp t,struct hp h,struct hp *th){
    int len1=strlen(t.str);
    int len2=strlen(h.str);
    struct hp A1[len2];

    for(int i=0;i<len2;++i){
        int n=h.a[i];

        int u=i;
        for(int j=u;j<u+len1;++j){
            A1[i].a[j]=t.a[j-u]*n;
        }

//        for(int f=0;f<len2;++f){
//            struct hp sum;
//            sum = add(th,A1[f],sum);
//        }
    }
}
int main(){
    struct hp x,y,xy;
    init(&x);
    init(&y);
    init(&xy);
    in(&x);
    in(&y);
    add(x,y,&xy);
    show(xy);
    return 0;
}