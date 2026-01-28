//https://codeforces.com/contest/2184/problem/B

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int s,k,m;
        cin>>s>>k>>m;
        if(s<=k)
        {
            cout<<max(0,s-m%k)<<endl;
        }
        else{
            int turn=m/k;
            if(turn & 1)
            {
                cout<<k-m%k<<endl;
            }
            else{
                cout<<s-m%k<<endl;
            }
        }
 
 
}
 
}