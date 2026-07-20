#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int small_total=0;
    int capital_total=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>=65&&s[i]<=90){
            capital_total++;
        }else{
            small_total++;
        }
    }if(small_total>=capital_total){
        for(int i=0;i<s.size();i++)
        if(s[i]>=65&&s[i]<=90){
            s[i]=s[i]+32;
 
        }
    }
    if(small_total<capital_total){
        for(int i=0;i<s.size();i++)
        if(s[i]>=97&&s[i]<=122){
            s[i]=s[i]-32;
 
        }
 
}
cout<<s<<endl;
return 0;
}
 
 