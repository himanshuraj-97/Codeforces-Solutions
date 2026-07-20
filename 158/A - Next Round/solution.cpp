#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int c=arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=c&&arr[i]>0){
            sum++;
        }
    }
    cout<<sum<<endl;
 
   
    return 0;
}