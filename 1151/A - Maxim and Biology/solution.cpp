#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int dist(char a, char b) {
    int d = abs(a - b);
    return min(d, 26 - d);
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string target="ACTG";
    int minimum=INT_MAX;
    for(int i=0;i<n-3;i++){
        int x=i;
        int sum=0;
       for(int y=0;y<4;y++){
        if(s[x+y]!=target[y]){
            sum+=dist(s[x+y],target[y]);
        }
       }
       minimum=min(minimum,sum);
 
    }
    cout<<minimum<<endl;
}