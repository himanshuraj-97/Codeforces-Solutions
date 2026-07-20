#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=s.size();
    int total =0;
   
    for(int i=0;i<x;i++){
         int count=0;
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
               count++;
            }
            
            }
            if(count==0){
                total++;
            }
        }
         if(total%2==0){
            cout<<"CHAT WITH HER!"<<endl;
         }else{
            cout<<"IGNORE HIM!"<<endl;
 
         }
    }
   
 