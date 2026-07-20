#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
 
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
 
        int i;
        for (i = 1; i < n; i++) {
            if (arr[i] <= arr[i - 1]) {
                break;
            }
        }
 
        if (i == n) {
            cout << "YES
";
        } else {
            for(int j=1;j<=n;j++){
            for (i = 1; i < n - 1; i++) {
                if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                }
            }
}
            int j;
            for (j = 1; j < n; j++) {
                if (arr[j] <= arr[j - 1]) {
                    cout << "NO
";
                    break;
                }
            }
 
            if (j == n) {
                cout << "YES
";
            }
        }
    }
}