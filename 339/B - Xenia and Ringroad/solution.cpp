 #include<bits/stdc++.h>
 #include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>vec(m);
    for(int i=0;i<m;i++){
        cin>>vec[i];
 
    }
    long long ans=0;
    ans=vec[0]-1;
    for(int i=1;i<m;i++){
        if(vec[i]>=vec[i-1]){
            ans+=(vec[i]-vec[i-1]);
        }else{
            ans+=(n-vec[i-1]);
            ans+=(vec[i]);
        }
    }
    cout<<ans<<endl;
}