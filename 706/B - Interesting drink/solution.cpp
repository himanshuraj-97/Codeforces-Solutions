#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	  cin>>arr[i];
	  
	}
	sort(arr,arr+n);
	int arr2[n];
	int k = n;
	arr2[n - 1] = k;
	for(int i=n-2;i>=0;i--){
	  if (arr[i + 1] == arr[i]) arr2[i] = k;
	  else
	  {
	    k = i + 1;
	    arr2[i] = k;
	  }
	}
	int t;
	cin>>t;
	while(t--){
	  int k;
	  cin>>k;
	  if (k < arr[0]) cout << 0 << endl;
	  else if (k > arr[n - 1]) cout << arr2[n - 1] << endl;
	  else {
	    int st=0;int end=n-1, p = 0;
	    while(st<=end){
	      int mid=(st+end)/2;
	      if (k == arr[mid]){ 
	        cout << arr2[mid] << endl;
	        p = 1;
	        break;
	      }
	      else if (k < arr[mid]) end = mid - 1;
	      else if (k > arr[mid]) st = mid + 1;
	    }
	    if (p == 0)
	    {
	      if (k >= arr[st]) cout << arr2[st] << endl;
	      else cout << arr2[st - 1] << endl;
	    }
	  }
	}
}