#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
 
        sort(s.begin(), s.end());
 
        int odd = 0;
        int count = 1;
 
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                count++;
            } else {
                if(count % 2 != 0) odd++;
                count = 1;
            }
        }
 
        if(count % 2 != 0) odd++;  // last group check
 
        if(odd - k <= 1)
            cout << "YES
";
        else
            cout << "NO
";
    }
}