#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num=0;
    while(n>=5){
        n=n-5;
        num++;
    }if(n==4){
        n=n-4;
        num++;
    }else if(n==3){
        n=n-3;
        num++;
    }else if(n==2){
        n=n-2;
        num++;
    } else if(n==1){
         n=n-1;
        num++;
    }
       
    
    
    cout<<num<<endl;
}