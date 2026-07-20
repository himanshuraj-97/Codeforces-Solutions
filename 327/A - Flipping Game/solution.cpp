#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
 
    int count_1 = 0;
    for(int i = 0; i < n; i++){
        if(vec[i] == 1) count_1++;
    }
 
    int maximum = INT_MIN;
 
    
    for(int i = 0; i < n; i++){
        int gain = 0;
        for(int j = i; j < n; j++){
            if(vec[j] == 0) gain += 1;
            else gain -= 1;
 
            maximum = max(maximum, gain);
        }
    }
 
    cout << count_1 + maximum << endl;
}