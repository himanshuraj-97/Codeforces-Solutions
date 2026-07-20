#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n;
	  cin>>n;
	  int arr[n];
	  for(int i=0;i<n;i++){
	    cin>>arr[i];
	  }
	  int count=0;
	  int maximum=0;
	  for(int i=0;i<n;i++){
	    if(arr[i]==0){
	      count++;
	    }else{
	      maximum=max(count,maximum);
	      count=0;
	    }
	  }
	  maximum=max(count,maximum);
	  cout<<maximum<<endl;
	}
  return 0;
}