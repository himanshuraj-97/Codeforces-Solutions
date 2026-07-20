#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s,t;
        cin>>s>>t;
        int n=s.size();
        int diff=1;
        int contain_a=0;
 
        sort(t.begin(),t.end());
 
        if(t[0]=='a'){
            contain_a=1;
        }
 
        for(int i=1;i<t.size();i++ ){
            if(t[i]!=t[i-1]){
                diff++;
            }
            if(t[i]=='a'){
                contain_a++;
            }
        }
 
        if(diff==1 && contain_a==1){
            cout<<"1"<<endl;
        }
        else if(contain_a>=1){
            cout<<"-1"<<endl;
        }
        else{
            cout<<(1LL<<n)<<endl;  
        }
    }
}