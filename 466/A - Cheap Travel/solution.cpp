#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(n%m==0){
	  int total1=(n/m)*b;
	  int total2=n*a;
	  cout<<min(total1,total2)<<endl;
	}else{
	  int total3=(n/m)*b+(n%m)*a;
	  int total5=((n/m)+1)*b;
	  int total4=a*n;
	  cout<<min({total3,total4,total5});
	}
}