#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>vec(2*n);
    for(int i=0;i<2*n;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    bool ans=true;
    for(int i=1;i<2*n;i++){
        if(vec[i]!=vec[i-1]){
            ans=false;
        }
    }
    if(ans==false){
        for(int i=0;i<2*n;i++){
            cout<<vec[i]<<" ";
        }
    }else{
        cout<<"-1"<<endl;
    }
 
}