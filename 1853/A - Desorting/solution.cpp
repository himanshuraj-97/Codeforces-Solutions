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
	  bool sort = false;
	  for(int i=0;i<n;i++){
	    cin>>arr[i];
	  }
	  for(int i=1;i<n;i++){
	    if(arr[i]<arr[i-1]){
	      sort =true;
	      break;
	    }
	  }
	  if(sort==true){
	    cout<<"0"<<endl;
	  }else{
	    int minimum=INT_MAX;
	    int diff;
	    for(int i=1;i<n;i++){
	      diff=0;
	      diff=arr[i]-arr[i-1];
	      minimum=min(minimum,diff);
	    }
	    diff=minimum;
	    if(diff==0||diff==1){
	      cout<<"1"<<endl;
	    }else{
	      if(diff%2==0){
	        cout<<(diff-(diff/2)+1)<<endl;
	      }else{
	        cout<<diff/2+1<<endl;
	      }
	    }
	  }
	}
 
}