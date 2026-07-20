#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>vec;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        vec.push_back(x);
	    }
	    sort(vec.begin(),vec.end());
	    int count =0;
	    int maximum=INT_MIN;
	    for(int i=1;i<n;i++){
	        if(vec[i]-vec[i-1]<=k){
	            count++;
	        }else{
	            maximum=max(maximum,count);
	            count=0;
	        }
	    }
	    maximum=max(maximum,count);
	    cout<<n-(maximum+1)<<endl;
	}
 
}