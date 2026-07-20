#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int a;
	  cin>>a;
	  int x=1;
	  int count=0;
	  while(1){
	    if(x%3!=0&&x%10!=3){
	      count++;
	    }if(count==a){
	      cout<<x<<endl;
	      break;
	    }
	    x++;
	  }
	  
	 
	}
 
}