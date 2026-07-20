#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int a,b;
	  cin>>a>>b;
	  int count=0;
	  count=abs(a-b)/10;
	  int rem=abs(a-b)%10;
	  if(rem==0){
	  cout<<count<<endl;
	  }else{
	    cout<<count+1<<endl;
	  }
	  
	}
 
}