#include <bits/stdc++.h>
 
 
using namespace std;
 
int main() {
	
	int n,m;
	cin>>n>>m;
	int arr[m];
	for(int i=0;i<m;i++){
	  cin>>arr[i];
	}
	sort(arr,arr+m);
	int minimum=INT_MAX;
	int i=0;
	
	while((n+i-1)!=m){
	  int count =0;
	  count=arr[n+i-1]-arr[i];
	  minimum=min(minimum,count);
	  i++;
	}
	cout<<minimum;
	
 
}