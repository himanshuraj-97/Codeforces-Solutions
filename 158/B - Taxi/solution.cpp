#include <iostream>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
 
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == 1) count1++;
        else if(x == 2) count2++;
        else if(x == 3) count3++;
        else if(x == 4) count4++;
    }
 
    int total = 0;
 
    // All 4 go alone
    total += count4;
 
    // 3 + 1 pairing
    int pair31 = min(count3, count1);
    total += pair31;
    count3 -= pair31;
    count1 -= pair31;
 
    
    total += count3;
 
    
    total += count2 / 2;
    count2 %= 2;
 
    
    if(count2 == 1){
        total += 1;
        count1 -= min(2, count1); 
    }
 
    
    if(count1 > 0){
        total += (count1 + 3) / 4;
    }
 
    cout << total << endl;
    return 0;
}