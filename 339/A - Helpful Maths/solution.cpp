#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	string s,s1,s2;
	cin>>s;
	s1="";
	s2="";
	for(int i=0;i<s.size();i++){
	  if(s[i]=='+'){
	    continue;
	  }else{
	    s1+=s[i];
	  }
	}
	sort(s1.begin(),s1.end());
	for(int i=0;i<s1.size();i++){
	  s2+=s1[i];
	  s2+='+';
	}
	s2.pop_back();
	cout<<s2<<endl;
 
}