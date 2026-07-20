#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
 
    }
    int same=arr[0];
    int count=1;
    for(int i=0;i<n;i++){
        if(arr[i]!=same){
            count++;
            same=arr[i];
        }else{
            continue;
        }
 
    }
    cout<<count<<endl;
    return 0;
}