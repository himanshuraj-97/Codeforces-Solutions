#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int arr[n];
 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
 
    int minimum = arr[0];
    int maximum = arr[0];
    int idx1 = 0;   // index of maximum
    int idx2 = 0;   // index of minimum
 
    for(int i = 1; i < n; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
            idx1 = i;
        }
        if(arr[i] <= minimum){
            minimum = arr[i];
            idx2 = i;
        }
    }
    int total =idx1+(n-1-idx2);
    if(idx1>idx2){
    
    cout<<total-1<<endl;
    }else{
        cout<<total<<endl;
    }
 
    return 0;
}