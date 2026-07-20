#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long a,b,n;
	    cin>>a>>b>>n;
	    long long total=0;
	    
	    long long arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	         
	    }
	    total+=(b-1);//b=1;
	    b=1;
	    for(int i=0;i<n;i++){
	       b+=arr[i];
	       if(b>a){
	           b=a;
	            total+=(b-1);
	            b=1;
	       }else{
	            total+=(b-1); 
	            b=1;
	       }
	       
	    }
	    cout<<(total+1)<<endl;
	    
	}
 
}