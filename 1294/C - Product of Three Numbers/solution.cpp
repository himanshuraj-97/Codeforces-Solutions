#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	   
	    int a=-1,b=-1,c=-1;
	    for(int i=2;i*i<=n;i++){
	        if(n%i==0){
	            a=i;
	            break;
	        }
	    }
	    if(a==-1){
	        cout<<"NO"<<endl;
	        continue;
	    }
	    int rem=n/a;
	    for(int j=a+1;j*j<=rem;j++){
	        if(rem%j==0){
	            b=j;
	            break;
	        }
	    }if(b == -1) {
            cout << "NO
";
            continue;
        }
         c = rem / b;
 
        if(c != a && c != b && c > 1) {
            cout << "YES
";
            cout << a << " " << b << " " << c << "
";
        } else {
            cout << "NO
";
        }
	}
 
}