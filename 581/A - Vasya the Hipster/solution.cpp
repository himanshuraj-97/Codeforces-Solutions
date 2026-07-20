#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int x=min(a,b);
	int y=max(a,b);
	y=y-x;
	cout<<x<<" ";
	
	if(y%2==0){
	  cout<<y/2;
	}else{
	  cout<<(y-1)/2;
	}
	
	
  
  
 return 0;
}