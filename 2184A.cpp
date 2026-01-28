//https://codeforces.com/contest/2184/problem/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if(n<=3)
        {
            cout<<n<<endl;
        }
        else{
            cout<<n%2<<endl;
        }
 
}
 
}