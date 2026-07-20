#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        if(i%2!=0){
            for(int i=0;i<b;i++){
                cout<<"#";
            }
        }
        if(i%2==0&&i%4!=0){
            
            for(int i=0;i<b-1;i++){
               cout<<".";
            }
            cout<<"#";
            
        }
        if(i%4==0){
            cout<<"#";
            for(int i=0;i<b-1;i++){
               cout<<".";
            }
        }
        cout<<endl;
    }
}