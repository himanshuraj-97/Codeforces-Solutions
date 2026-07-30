#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
 
        int q;
        cin >> q;
 
        while (q--) {
            string s;
            cin >> s;
 
            if (s.size() != n) {
                cout << "NO" << endl;
                continue;
            }
 
            unordered_map<int, char> numToChar;
            unordered_map<char, int> charToNum;
 
            bool ok = true;
 
            for (int i = 0; i < n; i++) {
                int num = vec[i];
                char ch = s[i];
 
                
                if (numToChar.find(num) != numToChar.end()) {
                    if (numToChar[num] != ch) {
                        ok = false;
                        break;
                    }
                } else {
                    numToChar[num] = ch;
                }
 
                
                if (charToNum.find(ch) != charToNum.end()) {
                    if (charToNum[ch] != num) {
                        ok = false;
                        break;
                    }
                } else {
                    charToNum[ch] = num;
                }
            }
 
            if (ok)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
 
    return 0;
}