#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
 
    int count1 = (k * l) / nl;
    int count2 = c * d;
    int count3 = p / np;
 
    cout << min({count1, count2, count3}) / n << endl;
}