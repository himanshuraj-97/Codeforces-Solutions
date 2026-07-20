#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int x;
    int minimum = INT_MAX;
    bool hasZero = false;
 
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x == 0) {
            hasZero = true;
        }
        minimum = min(minimum, abs(x));
    }
 
    if(hasZero) {
        cout << 0 << endl;
    } else {
        cout << minimum << endl;
    }
}