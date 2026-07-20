#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n=3;
	 
	  int arr[n];
	  for(int i=0;i<n;i++){
	  cin>>arr[i];  
	}
	sort(arr,arr+n);
	cout<<arr[1]<<endl;
	
}
}