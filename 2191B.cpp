//https://codeforces.com/contest/2191/problem/B

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
 
        vector<int>arr(n);
        map<int,int>mp;
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
            mp[arr[i]]++;
 
        }
        if(mp[0]==1)
        {
            cout<<"Yes"<<endl;
        }
        else if(mp[0]>1 && mp[1])
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
        
 
}
