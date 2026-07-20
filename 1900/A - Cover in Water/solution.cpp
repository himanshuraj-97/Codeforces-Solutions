#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int count=0;
      int sum=0;
      int maximum=INT_MIN;
      for(int i=0;i<n;i++){
        if(s[i]=='.'){
          count++;
          sum++;
        }else{
          maximum=max(count,maximum);
          count=0;
        }
      }
      maximum=max(count,maximum);
      if(maximum>=3){
        cout<<"2"<<endl;
      }else{
        cout<<sum<<endl;
      }
      
    }
    
    return 0;
}