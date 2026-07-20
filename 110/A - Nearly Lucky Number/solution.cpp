#include<iostream>
using namespace std;
int main(){
   string s;
   cin>>s;
   int count=0;
   for(int i=0;i<s.size();i++){
    if(s[i]=='4'||s[i]=='7'){
        count++;
    }
 
   }
   if(count==0){
    cout<<"NO"<<endl;
    return 0;
   }
    while(count>0){
    int rem =0;
    rem=count%10;
    count=count/10;
    if(rem==4||rem==7){
        continue;
    }else{
        cout<<"NO";
        return 0;
    }
 
   }
  cout<<"YES"<<endl;
  return 0;
 
}