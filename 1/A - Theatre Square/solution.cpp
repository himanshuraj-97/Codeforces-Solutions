#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int sum=0;
    if(m>a&&n>a){
    int b=n/a;
    sum+=b;
    if(n%a!=0){
        sum++;
    }
    long long int c=m/a;
   
    if(b%a!=0){
        c++;
    }
     cout<<c*sum<<endl;
    }else if (m<=a&&n<=a){
        cout<<"1"<<endl;
    }else if(m<=a||n<=a){
        cout<<"2"<<endl;
    }
   
    return 0;
}