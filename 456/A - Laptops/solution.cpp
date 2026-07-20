#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<pair<int,int>>vec(n);
	for(int i=0;i<n;i++){
	    cin>>vec[i].first>>vec[i].second;
	} sort(vec.begin(),vec.end());
	for(int i=1;i<n;i++){
	    if(vec[i].second<vec[i-1].second){
	        cout<<"Happy Alex"<<endl;
    return 0;
	    }
	}
 
	    cout<<"Poor Alex"<<endl;
	return 0;
 
	
}