#include<iostream>
#include<cstdio>
using namespace std;
int n,a[101]={0},s[101]={0};
void change(int x)
{
    int g=0;
    for(int i=100;i>=0;i--)
    {
        a[i]=a[i]*x+g;
        g=a[i]/10;
        a[i]=a[i]%10;
    }
}
void qh()
{
    int g=0;
    for(int i=100;i>=0;i--)
    {
        s[i]=s[i]+a[i]+g;
        g=s[i]/10;
        s[i]=s[i]%10;
    }
}
void sc()
{
    int w;
    for(int i=0;i<=100;i++)
    {
        if(s[i]!=0)
        {
            w=i;
            break;
        }
    }
    for(int i=w;i<=100;i++)
        printf("%d",s[i]);
}
int main()
{
    scanf("%d",&n);
    s[100]=a[100]=1;
    for(int i=2;i<=n;i++)
    {
        change(i);
        qh();
    }
    sc();
    return 0;
}




//#include <iostream>
//using namespace std;
//int main(){
//    int n;
//    cin >> n;
//    long long int sum=0;
//    for(int i=1;i<=n;i++){
//        long long int factorial=1;
//        for(int j=1;j<=i;j++) {
//            factorial *= j;
//        }
//        sum+=factorial;
//    }
//    cout << sum << endl;
//    return 0;
//}
// Created by 86138 on 2024/3/24.
//
