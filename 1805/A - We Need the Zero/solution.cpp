#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    
    int total=0;
    for(int i=0;i<n;i++){
      int a;
      cin>>a;
      
      total=total^a;
    }
    if(n%2==0){
      if(total==0){
        cout<<"0"<<endl;
      }else{
        cout<<"-1"<<endl;
      }
    }else{
      cout<<total<<endl;
    }
    
  }
}