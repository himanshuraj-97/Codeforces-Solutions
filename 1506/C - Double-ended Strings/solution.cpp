#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string a, b;
        cin >> a >> b;
 
        int maxLen = 0;
 
        // Generate all substrings of a
        for (int i = 0; i < a.size(); i++) {
            for (int len = 1; i + len <= a.size(); len++) {
                string sub = a.substr(i, len);
 
                // Check if this substring exists in b
                if (b.find(sub) != string::npos) {
                    maxLen = max(maxLen, len);
                }
            }
        }
 
        int ans = a.size() + b.size() - 2 * maxLen;
        cout << ans << '
';
    }
 
    return 0;
}