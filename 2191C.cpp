//https://codeforces.com/contest/2191/problem/C



#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        string r = s;
        sort(r.begin(), r.end());
 
        if (s == r) {
            cout << "Bob\n";
            continue;  
        }
 
        cout << "Alice\n";
 
        vector<int> v;
        for (int i = 0; i < n; i++) {
            if (s[i] != r[i])
                v.push_back(i + 1);
        }
 
        cout << v.size() << "\n";
        for (int u : v)
            cout << u << " ";
        cout << "\n";
    }
 
    return 0;
}
