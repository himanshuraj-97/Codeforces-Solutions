#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    float total=0;
    for(int i=0;i<n;i++){
        total+=(arr[i]/100.0);
    }
    cout<<(total*100)/n;
    return 0;
}