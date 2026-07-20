#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
 
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
 
        bool found = false;
 
        for(int j = 1; j < n - 1; j++){
            int left = -1, right = -1;
 
            for(int i = 0; i < j; i++){
                if(arr[i] < arr[j]){
                    left = i;
                    break;
                }
            }
 
            for(int k = j + 1; k < n; k++){
                if(arr[k] < arr[j]){
                    right = k;
                    break;
                }
            }
 
            if(left != -1 && right != -1){
                cout << "YES
";
                cout << left + 1 << " " << j + 1 << " " << right + 1 << "
";
                found = true;
                break;
            }
        }
 
        if(!found) cout << "NO
";
    }
}