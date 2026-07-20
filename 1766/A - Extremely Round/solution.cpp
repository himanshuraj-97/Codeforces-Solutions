#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int count = 0;
        int power = 1;
        
        while(power <= n) {
            for(int d = 1; d <= 9; d++) {
                int num = d * power;
                if(num <= n) {
                    count++;
                }
            }
            power *= 10;
        }
        
        cout << count << endl;
    }
    
    return 0;
}