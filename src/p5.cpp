/*#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << "\n";
        return;
    }
    hanoi(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << "\n";
    hanoi(n - 1, aux, to, from);
}

int main(){
    int n1; cin >> n1;
    hanoi(n1, 'A', 'C', 'B');
}*/

#include <bits/stdc++.h>

using namespace std;

void hanoi(int n, int from, int to, int aux) {
    if (n == 0) {
        return;
    }
    int a = abs(from - to);

    if (a == 1) {
    
        hanoi(n - 1, from, aux, to);
        
        cout << "Move disk " << n << " from " << from << " to " << to << endl;
        
        hanoi(n - 1, aux, to, from);

    } 
    else {
       
        hanoi(n - 1, from, to, aux);
        

        cout << "Move disk " << n << " from " << from << " to " << aux << endl;

        hanoi(n - 1, to, from, aux);
    
        cout << "Move disk " << n << " from " << aux << " to " << to << endl;
 
        hanoi(n - 1, from, to, aux);
    }
}

int main() {
    int n;
    
    if (cin >> n) {
    
        hanoi(n, 1, 3, 2);
    }

    return 0;
}
