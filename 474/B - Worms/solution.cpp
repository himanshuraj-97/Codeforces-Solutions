#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int arr[n];
    int sum = 0;
    int ansarr[n];
 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
        ansarr[i] = sum;
    }
 
    int m;
    cin >> m;
 
    int arr1[m];
    for(int i = 0; i < m; i++){
        cin >> arr1[i]; 
    }
 
    for(int i = 0; i < m; i++){
        int st = 0, end = n - 1;
        int ans = -1;
 
        while(st <= end){   
            int mid = (st + end) / 2;
 
            if(ansarr[mid] >= arr1[i]){
                ans = mid;
                end = mid - 1;  
            } else {
                st = mid + 1;   
            }
        }
 
        cout << ans + 1 << endl;
    }
}