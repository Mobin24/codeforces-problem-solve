//https://codeforces.com/contest/2179/problem/B

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

        int baseans=0;
        for(int i=1;i<n;i++)
        {
            baseans+=abs(arr[i]-arr[i-1]);
            
        }
        int ans=baseans;
        ans=min(ans,baseans-abs(arr[0]-arr[1]));
        ans=min(ans,baseans-abs(arr[n-2]-arr[n-1]));

        for(int i=1;i<n-1;i++)
        {
            int minus=abs(arr[i-1]-arr[i])+abs(arr[i+1]-arr[i]);
            int plus=abs(arr[i-1]-arr[i+1]);
            ans=min(ans,baseans+plus-minus);
        }
        cout<<ans<<endl;

    }
    return 0;
}