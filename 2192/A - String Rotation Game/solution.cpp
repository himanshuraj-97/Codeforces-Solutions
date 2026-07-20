#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int maximum=0;
	    int total=1;
	    for(int j=1;j<s.size();j++){
	            if(s[j]!=s[j-1]){
	                total++;
	            }
	        }
	    maximum=max(total,maximum);
	    total=1;
	    if(maximum==n){
	        cout<<maximum<<endl;
	    }else{
	         for(int i=0;i<s.size();i++){
	             s.insert(s.begin(), s[n-1]);
	            s.erase(s.size()-1);
	            for(int j=1;j<s.size();j++){
	            if(s[j]!=s[j-1]){
	                total++;
	            }
	        }
	    maximum=max(total,maximum);
	    total=1;
	            
	    }
	     cout<<maximum<<endl;
	    }
	   
	   
	}
 
}