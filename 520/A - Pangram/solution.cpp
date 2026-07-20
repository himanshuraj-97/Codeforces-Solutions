#include<iostream>
#include<algorithm>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    if(n < 26){
        cout << "NO";
        return 0;
    }
 
    // convert to lowercase
    for(int i = 0; i < n; i++){
        s[i] = tolower(s[i]);
    }
 
    sort(s.begin(), s.end());
 
    int count = 1;
    char ch = s[0];
 
    for(int i = 1; i < s.size(); i++){
        if(ch != s[i]){
            count++;
            ch = s[i];
        }
    }
 
    if(count >= 26){
        cout << "YES";
    } else {
        cout << "NO";
    }
 
    return 0;
}