#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count =0;
    int sum=0;
    for(int i=0;i<n;i++){
       if(arr[i]%2==0){
        sum++;//even
       } else{
        count++;// odd 
    }
    }
    if(count==1){
        for(int i =0;i<n;i++){
            if(arr[i]%2!=0){
                cout<<(i+1)<<endl;
                return 0;
            }
        }
    }else{
        for(int i =0;i<n;i++){
            if(arr[i]%2==0){
                cout<<(i+1)<<endl;
                return 0;
            }
        }
    }
}