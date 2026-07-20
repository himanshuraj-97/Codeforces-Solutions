#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int num=0;
    int sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A'){
            num++;
        }else{
            sum++;
        }
    }
    if(num>sum){
        cout<<"Anton"<<endl;
 
    }else if(num==sum){
        cout<<"Friendship"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }
 
}