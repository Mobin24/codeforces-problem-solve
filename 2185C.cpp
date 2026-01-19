//https://codeforces.com/contest/2185/problem/C

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
        vector<int>arr(n);
        for(auto& it:arr)
        {
            cin>>it;
        }
        sort(arr.begin(),arr.end());
        int x=1;
        for(int i=0;i<n;i++)
        {
            int temp=1;
            for(int j=i+1;j<n;j++)
            {
            if(arr[j-1]==arr[j])
            {
                continue;
            }
            else if(arr[j-1]+1==arr[j])
            {
                temp++;
            }
            else{
                i=j-1;
                break;
            }
            x=max(x,temp);
            }
        }
        cout<<x<<endl;
        
 
}
 
}

