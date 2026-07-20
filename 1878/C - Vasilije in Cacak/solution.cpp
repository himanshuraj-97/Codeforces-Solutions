#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        long long n,k,x;
        cin >> n >> k >> x;
        
        long long minimum = (k*(k+1))/2;
        long long maximum = k*n - (k*(k-1))/2;
        
        if(x >= minimum && x <= maximum){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}