#include<iostream>
using namespace std;
 
int main(){
    int k,n,w;
    cin>>k>>n>>w;//k->cost ,n->intial money,w->no of wants
    int total_cost=0;
    for(int i=1;i<=w;i++){
        total_cost+=k*i;
    }if(total_cost>n){
    cout<<total_cost-n<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
 
}