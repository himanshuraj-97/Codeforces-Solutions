#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n;
	  cin>>n;
	  int arr[n];
	  for(int i=0;i<n;i++){
	    cin>>arr[i];
	  }
	  vector<int>vec;
	  int a=arr[0];
	  vec.push_back(a);
	  for(int i=1;i<n;i++){
	   if(arr[i-1]<arr[i]){
	     int z=arr[i];
	     vec.push_back(z);
	     
	   }else if(arr[i-1]==arr[i]){
	     vec.push_back(arr[i]);
	   }
	   else{
	     int x=arr[i];
	     vec.push_back(x);
	     int y=arr[i];
	     vec.push_back(y);
	   }
	  }
	  cout<<vec.size()<<endl;
	  for(int i=0;i<vec.size();i++){
	    cout<<vec[i]<<" ";
	  }
	  cout<<endl;
	}
 
}