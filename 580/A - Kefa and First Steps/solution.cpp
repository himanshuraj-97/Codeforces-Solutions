#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=1;
    int maximum=0;
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){
            count++;
        }else{
            maximum=max(count,maximum);
            count =1;
        }
       
        
    }
    maximum=max(count,maximum);
    cout<<maximum<<endl;
}