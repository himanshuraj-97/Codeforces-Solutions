#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	  int n;
	  cin>>n;
	  bool find=false;
	  vector<int>arr(n);
	  for(int i=0;i<n;i++){
	    cin>>arr[i];
	  }
	  for(int i=0;i<n;i++){
	    long long mul1=0;
	    long long  mul2=0;
	    for(int j=0;j<n;j++){
	      if(i>=j){
	        if(arr[j]==2){
	          mul1+=1;
	        }
	      }else{
	         if(arr[j]==2){
	          mul2+=1;
	        }
	      }
	    }
	    if(mul1==mul2){
	      cout<<i+1<<endl;
	      find=true;
	      break;
	    }
	  }if(find==false){
	    cout<<"-1"<<endl;
	  }
	  
	  }
 
}