#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using namespace std;
int main(){
    int n;
    cin>>n;
   
    vector<pair<int,string>>vec(n);
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int x=s.size();
        vec[i]={x,s};
    }
    bool ans=true;
    sort(vec.begin(),vec.end());
    for(int i=0;i<n-1;i++){
        string s1=vec[i].second;
        string s2=vec[i+1].second;
        if(s2.find(s1)==string::npos){
            ans=false;
            break;
        }
 
    }
    if(ans==true){
        cout<<"YES"<<endl;
        for(auto it:vec){
            cout<<it.second<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }
 
}