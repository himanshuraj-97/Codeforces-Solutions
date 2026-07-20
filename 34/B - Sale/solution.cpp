#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
 
    sort(vec.begin(), vec.end());
 
    int sum = 0;
 
    m = min(m, n);   
 
    for(int i = 0; i < m; i++){
        if(vec[i] < 0){
            sum += vec[i];
        }
    }
 
    int num = abs(sum);
    cout << num << endl;
 
    return 0;
}