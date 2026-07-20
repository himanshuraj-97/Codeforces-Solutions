#include<iostream>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int x=s1.size();
    int total=0;
    int count=0;
    for(int i=0;i<x;i++){
        if(s1[i]!=s2[i] &&int(s1[i])!=(int(s2[i])+32) && (int(s1[i])+32)!=int(s2[i])){
            if(int(s1[i])<=90 &&int(s1[i])>=65){
                total+=(int(s1[i])+32);
            }else{
                total+=int(s1[i]);
            }if(int(s2[i])<=90 &&int(s2[i])>=65){
                count+=(int(s2[i])+32);
            }else{
                count+=int(s2[i]);
            }
        
      break;
    }
      
}
    if(total>count){
        cout<<"1"<<endl;
 
    }else if(total<count){
        cout<<"-1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
 
}