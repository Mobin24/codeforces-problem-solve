//https://codeforces.com/contest/1873/problem/A
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
 
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c') {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}