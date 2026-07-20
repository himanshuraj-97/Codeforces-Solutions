#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  string s;
	  int ans=0;
	  cin>>s;
	  string s1="codeforces";
	  for(int i=0;i<s.size();i++){
	    if(s[i]!=s1[i]){
	      ans++;
	    }
	  }
	  cout<<ans<<endl;
	}
 
}