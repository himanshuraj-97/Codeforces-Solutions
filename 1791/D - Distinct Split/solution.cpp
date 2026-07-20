#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
       string s1,s2;
       s1="";
       s2="";
       int pre[n];
       int suff[n];
       int dis=0;
       int diff=0;
       for(int i=0;i<n;i++){
        if(s1.find(s[i])==string::npos){
            dis++;
            s1+=s[i];
            pre[i]=dis;
        }else{
            pre[i]=dis;
        }
       if(s2.find(s[n-1-i])==string::npos){
        diff++;
        s2+=s[n-i-1];
        
       }
       suff[n-i-1]=diff;
    }
    int ans=0;
    for(int i=0;i<n-1;i++){
        int sum=pre[i]+suff[i+1];
        ans=max(ans,sum);
    }
    cout<<ans<<endl;
 
        
 
    }
 
}