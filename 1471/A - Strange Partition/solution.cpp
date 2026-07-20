#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        long long x;              // use long long
        cin >> n >> x;
 
        long long arr[n];
        long long sum = 0;        // prevent overflow
 
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
 
        long long sum2 = 0;
 
        // maximum beauty (no merge)
        for(int i = 0; i < n; i++){
            sum2 += (arr[i] + x - 1) / x;   // ceil trick
        }
 
        // minimum beauty (all merged)
        long long a = (sum + x - 1) / x;    // ceil trick
 
        long long minimal = a;
        long long maximum = sum2;
 
        cout << minimal << " " << maximum << endl;
    }
}