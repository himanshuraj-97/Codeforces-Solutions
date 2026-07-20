#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
 
        long long count1 = 0;
        long long count0 = 0;
 
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;
 
            if(x == 1){
                count1++;
            }
            else if(x == 0){
                count0++;
            }
        }
 
        // number of nearly full subsequences
        long long ans = count1 * (1LL << count0);
 
        cout << ans << endl;
    }
}