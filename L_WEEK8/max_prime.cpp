#include <iostream>
#include <cmath>
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
int main(){
    int n;
    cin >> n;
    int i=2;
    while (i <= sqrt(n)) {
        if (n % i == 0&&(is_prime(i))) break;
        i++;
    }
    cout << n / i;
    return 0;
}
