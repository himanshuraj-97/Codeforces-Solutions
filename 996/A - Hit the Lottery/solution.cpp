#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
   int rem=0;
    count+=n/100;
    rem=n%100;
    count+=rem/20;
    rem=rem%20;
    count+=rem/10;
    rem=rem%10;
    count+=rem/5;
    rem=rem%5;
    count+=rem;
    cout<<count<<endl;
 
    return 0;
 
}