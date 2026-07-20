#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int num=0;
    int count=0;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      if(x==-1){
        num++;
      }else{
        count++;
      }
    }
   if (count>=num&&num%2==0){
    cout<<"0"<<endl;
  }else if(count>=num&&num%2!=0){
    cout<<"1"<<endl;
  }
  else{
    int diff = num - count;
            int flips = (diff + 1) / 2;
            
            num -= flips;
            
            if(num % 2 != 0)
                flips++;
                
            cout << flips << endl;
    
  }
  }
    
}