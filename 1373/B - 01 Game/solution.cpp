#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int count = 0;
 
        for (int i = 0; i + 1 < (int)s.size(); i++) {
            if (s[i] != s[i+1]) {
                s.erase(i, 2);
                count++;
                i -= (i > 0) ? 2 : 1;
            }
        }
 
        cout << (count % 2 == 1 ? "DA" : "NET") << "
";
    }  
}