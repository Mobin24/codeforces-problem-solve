//https://codeforces.com/contest/1941/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        cin>>n>>m>>k;
        int left[n+1],right[m+1];
        for(int i=0;i<n;i++) cin>>left[i];
        for(int i=0;i<m;i++) cin>>right[i];
        int ans=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) 
            {
                if(left[i]+right[j]<=k)
                {
                    ans++;
                }
            }
          
        }
          cout<<ans<<endl;
    }
    return 0;
}