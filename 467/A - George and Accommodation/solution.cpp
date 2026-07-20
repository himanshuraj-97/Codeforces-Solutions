#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    n=2*n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i=i+2){
        if(arr[i+1]-arr[i]>=2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}