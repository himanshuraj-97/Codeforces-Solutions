#include<iostream>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        string t;
        cin>>t;
        int n=t.size();
        string ans;
        int count=1;
        for(int i=1;i<n;i++){
            if(t[i]==t[i-1]){
                count++;
            }
        }
        if(count==n){
            cout<<t<<endl;
        }else{
            for(int i=0;i<n;i++){
                ans+="10";
            }
            cout<<ans<<endl;
        }
       
       
    }
} 