#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n,k;
	  cin>>n>>k;
	  int arr[n];
	  for(int i=0;i<n;i++){
	    cin>>arr[i];
	  }
	  int sum =2*(k-arr[n-1]);
	  int num=arr[0];
	  int maximum=0;
	  for(int i=1;i<n;i++){
	    int ans=arr[i]-arr[i-1];
	    maximum=max(maximum,ans);
	  }
	  maximum=max(sum,max(maximum,num));
	  cout<<maximum<<endl;
	}
 
}