// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main(){
    int x, y; 
    cin >> x >> y;
    cout << gcd(x, y) << "\n";
}
