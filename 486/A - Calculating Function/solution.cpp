#include<iostream>
using namespace std;
 
int main(){
    long long n;
    cin >> n;
 
    long long total;
    if(n % 2 == 0)
        total = n / 2;
    else
        total = -(n + 1) / 2;
 
    cout << total << endl;
    return 0;
}