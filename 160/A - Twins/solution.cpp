#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int total=0;
    for(int i=0;i<n;i++){
        total+=arr[i];
    }
    sort(arr,arr+n);
    int sum=0;
    int count=0;
    float half=(total/2.0);
    for(int i=n-1;i>=0;i--){
        sum+=arr[i];
        count++;
        if(sum>half){
            cout<<count<<endl;
            return 0;
        }
        
    }
 
    
    
    
}