#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i];
 
    int m;
    cin >> m;
    vector<int> vec1(m);
    for(int i = 0; i < m; i++) cin >> vec1[i];
 
    sort(vec.begin(), vec.end());
    sort(vec1.begin(), vec1.end());
 
    int i = 0, j = 0;
    int count = 0;
 
    while(i < n && j < m) {
        if(abs(vec[i] - vec1[j]) <= 1) {
            count++;
            i++;
            j++;
        }
        else if(vec[i] < vec1[j]) {
            i++;
        }
        else {
            j++;
        }
    }
 
    cout << count << endl;
}