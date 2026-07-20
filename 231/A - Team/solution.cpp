#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int num=0;
    while(t--){
       
        int arr[3];
        for(int i=0;i<3;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int j=0;j<3;j++){
            if(arr[j]==1){
                 sum ++;
            }
        }
        if(sum>=2){
            num++;
        }
    }
    cout<<num<<endl;
    return 0;
 
    
}