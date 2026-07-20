#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n;cin>>n;
	  int arr[n];
	  for(int i=0;i<n;i++){
	    cin>>arr[i];
	  }
	  if(n==2){
	    if((arr[0]%2)==(arr[1]%2)){
	      cout<<"YES"<<endl;
	    }else{
	      cout<<"NO"<<endl;
	    }
	  }else{
	    int total1=0;
	    int total2=0;
	    for(int i=0;i<n;i++){
	      if(arr[i]%2==0){
	        total1+=arr[i];
	      }else{
	        total2+=arr[i];
	      }
	    }
	    if((total1%2)==(total2%2)){
	      cout<<"YES"<<endl;
	    }else{
	      cout<<"NO"<<endl;
	    }
	  }
	}
 
}