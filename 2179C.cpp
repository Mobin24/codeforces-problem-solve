//https://codeforces.com/contest/2179/problem/c

#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(auto& it:arr)
        {
            cin>>it;
        }
        
        sort(arr,arr+n);
        int ans=arr[0];
        int otherans=arr[n-1];
        for(int i=n-1;arr[i]>arr[0];i--)
        {
            otherans=min(otherans,arr[i]-arr[0]);
            
        }
        ans=max(ans,otherans);
            cout<<ans<<endl;

    }
    return 0;
}