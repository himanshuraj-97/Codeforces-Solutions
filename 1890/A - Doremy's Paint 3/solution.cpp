#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n;
	  cin>>n;
	  vector<int>arr(n);
	  for(int i=0;i<n;i++){
	    cin>>arr[i];
	  }
	  if(n<=2){
	    cout<<"Yes"<<endl;
	  }else{
	    sort(arr.begin(),arr.end());
	    int count1=1;
	    int count2=0;
	    int sum=1;
	    for(int i=1;i<n;i++){
	      if(arr[i]==arr[i-1]){
	        continue;
	      }else{
	        sum++;
	      }
	    }
	    if(sum>2){
	      cout<<"No"<<endl;
	    }else{
	      for(int i=1;i<n;i++){
	        if(arr[0]==arr[i]){
	          count1++;
	        }else{
	          count2++;
	        }
	      }
	      if(count1==0||count2==0){
	        cout<<"Yes"<<endl;
	      }
	      else if(abs(count1-count2)<=1){
	        cout<<"Yes"<<endl;
	      }else{
	        cout<<"No"<<endl;
	      }
	    }
	   
	  }
	  
	}
 
}