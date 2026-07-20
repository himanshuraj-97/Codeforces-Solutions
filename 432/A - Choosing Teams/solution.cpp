#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	vector<int>arr(n);
	int sum=0;
	for(int i=0;i<n;i++){
	  cin>>arr[i];
	  if(arr[i]+k<=5){
	    sum++;
	  }
	}
	cout<<sum/3<<endl;
	
	
 
}