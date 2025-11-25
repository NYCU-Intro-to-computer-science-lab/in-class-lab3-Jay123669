// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n-1);
}

long long sum(int n){
    return n*(n+1)/2;
}

int main(){
    int n;
    cin >> n;
    int a=n;
    cout << factorial(n) << endl;
    n=a;
    cout << sum(n) << endl;
}
