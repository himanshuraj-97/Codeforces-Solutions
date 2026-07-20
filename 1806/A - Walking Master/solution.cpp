#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  long long a,b,c,d;
	  cin>>a>>b>>c>>d;
	  if(d<b){
	    cout<<"-1"<<endl;
	  }else{
	  long long x=(d-b);
	  
	  a=a+x;
	  if(a>=c){
	    x+=(a-c);
	    cout<<x<<endl;
	  }else{
	    cout<<"-1"<<endl;
	  }
	  
	}
	}
	
 
}