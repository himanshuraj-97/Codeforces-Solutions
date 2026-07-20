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
    while(s.size()>0){
      if(s.back()=='0'&&s.front()=='1'){
        s.erase(s.begin());
        s.erase(s.size()-1);
        
      }else if(s.back()=='1'&&s.front()=='0'){
        s.erase(s.begin());
        s.erase(s.size()-1);
        
      }else{
        break;
      }
      
    }
    cout<<s.size()<<endl;
    
}
}