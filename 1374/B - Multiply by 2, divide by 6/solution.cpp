#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n;
	  cin>>n;
	  int count=0;
	  if(n==1){
	    cout<<"0"<<endl;
	  }else{
	  while(n>=1){
	    if(n%6==0){
	      n = n/6;
	      count++;
	    }else{
	      n = n*2;
	      count++;
	    }if(n==1){
	      break;
	    }
	  }
	  if(n==1){
	    cout<<count<<endl;
	  }else{
	    cout<<"-1"<<endl;
	  }
	}
	}
 
}