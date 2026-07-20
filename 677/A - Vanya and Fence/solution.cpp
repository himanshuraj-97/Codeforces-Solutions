#include<iostream>
 
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int arr[n];
    int total=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<=h){
            total++;
        }else{
            total=total+2;
        }
    }
    cout<<total<<endl;
}