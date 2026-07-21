#include<iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int n = s.size();
        int zero = 0, one = 0;
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
 
        bool found = false;   
 
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (zero > 0)
                    zero--;
                else {
                    cout << n - i << endl;
                    found = true;   
                    break;          
                }
            } else {
                if (one > 0)
                    one--;
                else {
                    cout << n - i << endl;
                    found = true;   
                    break;          
                }
            }
        }
 
        if (!found)            
            cout << 0 << endl;
    }
}