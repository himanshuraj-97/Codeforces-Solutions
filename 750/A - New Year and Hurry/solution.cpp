#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
 
    int total = 0;
    int num = 0;
    int i = 1;
 
    while(i <= n && total + k + 5*i <= 240){
        total += 5*i;
        num++;
        i++;
    }
 
    cout << num << endl;
}