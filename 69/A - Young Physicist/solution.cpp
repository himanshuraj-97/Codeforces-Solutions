#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[3*n];
    for(int i=0;i<3*n;i++){
        cin>>arr[i];
 
    }
    int total1=0,total2=0,total3=0;
    for (int i=0;i<3*n;i+=3){
        total1+=arr[i];
    }for (int i=1;i<3*n;i+=3){
        total2+=arr[i];
    }for (int i=2;i<3*n;i+=3){
        total3+=arr[i];
    }
    if(total1==0&&total2==0&&total3==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}
 