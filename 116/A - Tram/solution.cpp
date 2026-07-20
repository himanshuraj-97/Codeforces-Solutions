#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    n=n*2;
    int arr[n];
    int total=0;
    int maximum=0;
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i=i+2){
         maximum=max(total,maximum);
        total-=arr[i];
       
        total+=arr[i+1];
    }
    cout<<maximum<<endl;
 
}