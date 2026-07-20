#include <bits/stdc++.h>
using namespace std;
 
int main() {
    
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        long long x;
        cin >> x;  // first element
 
        for (int i = 1; i < n; i++) {
            long long a;
            cin >> a;
            x &= a;  // cumulative bitwise AND
        }
 
        cout << x << "
";
    }
 
    return 0;
}