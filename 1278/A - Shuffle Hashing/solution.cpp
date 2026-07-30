#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
 
        int n = s1.size();
        int x = s2.size();
 
        sort(s1.begin(), s1.end());
 
        bool ans = false;
 
        if (x < n) {
            cout << "NO
";
        } else {
            for (int i = 0; i <= x - n; i++) {
                string s3 = s2.substr(i, n);
                sort(s3.begin(), s3.end());
 
                if (s3 == s1) {
                    ans = true;
                    break;
                }
            }
 
            cout << (ans ? "YES" : "NO") << '
';
        }
    }
}