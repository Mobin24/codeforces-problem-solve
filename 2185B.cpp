//https://codeforces.com/contest/2185/problem/B


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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
           
        }
         cout<<n*(*max_element(arr.begin(),arr.end()))<<endl;
 
}
 
}
