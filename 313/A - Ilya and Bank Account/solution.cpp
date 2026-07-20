#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	int x=n;
	int y=n;
	int rem1=x%10;
  int rem2=x%100;
  x=x/10;
  y=(y/100)*10+rem1;
	int maximum=max(n,max(x,y));
  cout<<maximum<<endl;
}