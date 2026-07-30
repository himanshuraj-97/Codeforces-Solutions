#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    unordered_map<string, string> mpp;
    vector<string> vec(n);
 
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
 
    int count = 0;
    string s2 = "";
    vector<string> left, right;
 
    for (int i = 0; i < n; i++) {
 
        string s = vec[i];
        string s1 = s;
        reverse(s1.begin(), s1.end());
 
        // Check for middle palindrome
        if (s == s1 && count == 0 && mpp.find(s) == mpp.end()) {
            s2 = s;
            count++;
        }
 
        for (int j = i + 1; j < n; j++) {
 
            if (s1 == vec[j] &&
                mpp.find(s) == mpp.end() &&
                mpp.find(vec[j]) == mpp.end()) {
 
                left.push_back(s);
                right.push_back(vec[j]);
 
                mpp[s] = vec[j];
                mpp[vec[j]] = s;
 
                // If this string was chosen as middle, remove it
                if (s2 == s || s2 == vec[j]) {
                    s2 = "";
                    count = 0;
                }
 
                break;
            }
        }
    }
 
    string ans = "";
 
    for (int i = 0; i < left.size(); i++)
        ans += left[i];
 
    ans += s2;
 
    for (int i = right.size() - 1; i >= 0; i--)
        ans += right[i];
 
    cout << ans.size() << endl;
    cout << ans << endl;
 
    return 0;
}