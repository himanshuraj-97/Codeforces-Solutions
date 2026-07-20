 #include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
	  if(s[i]=='.'&&s[i]!='-'){
	    cout<<"0";
	  }else if(s[i+1]=='.'&&s[i]=='-'){
	    cout<<"1";
	    i++;
	  }else{
	    cout<<"2";
	    i++;
	  }
	}
 
}