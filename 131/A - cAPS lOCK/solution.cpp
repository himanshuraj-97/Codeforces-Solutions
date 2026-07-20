#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int n=s.size();
    bool found =false;
 
    if(n==1){
        if(65<=s[0]&&s[0]<=90){
            s[0]+=32;
        }else{
            s[0]-=32;
        }
        cout<<s;
    }
 
    else if(65<=s[0]&&s[0]<=90){
        for(int i=1;i<n;i++){
            if(65<=s[i]&&s[i]<=90){
                continue;
            }else{
                found=true;
                break;
            }
        }
 
        if(found==true){
            cout<<s<<endl;
        }else{
             for(int i=0;i<n;i++){
                 s[i]=s[i]+32;
             }
             cout<<s<<endl;
        }
    }
 
    else if(97<=s[0]&&s[0]<=122){
       for(int i=1;i<n;i++){
           if(65<=s[i]&&s[i]<=90){
               continue;
           }else{
               found=true;
               break;
           }
       }
 
       if(found==true){
           cout<<s<<endl;
       }else{
            s[0]-=32;
            for(int i=1;i<n;i++){
                s[i]+=32;
            }
            cout<<s<<endl;
       }
    }
 
    else{
        cout<<s<<endl;
    }
    
    return 0;
}