#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count_o=0;
        int count_c=0;
        int moves=0;
        for(int i=0;i<n;i++ ){
            if(s[i]=='('){
                count_o++;
            }else{
                if(count_o>0){
                    count_o--;
                }else{
                    moves++;
                }
            }
        }
        cout<<moves<<endl;
    }
}