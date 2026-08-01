#include <iostream>
#include <string>
 
using namespace std;
 
void solve() {
    string s;
    cin >> s;
 
    string best_final_result = "";
    bool is_first = true;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '0') {
            string after_alice = s;
            after_alice.erase(i, 1); 
 
            
            string bobs_best = "";
            bool first_bob = true;
 
            for (int j = 0; j < after_alice.length(); ++j) {
                if (after_alice[j] == '1') {
                    string after_bob = after_alice;
                    after_bob.erase(j, 1); 
                    if (first_bob || after_bob < bobs_best) {
                        bobs_best = after_bob;
                        first_bob = false;
                    }
                }
            }
 
            
            if (is_first || bobs_best > best_final_result) {
                best_final_result = bobs_best;
                is_first = false;
            }
        }
    }
 
    cout << best_final_result << "
";
}
 
int main() {
    
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}