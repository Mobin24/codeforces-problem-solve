//https://codeforces.com/contest/1703/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int t;
        cin>>t;
        while (t--)
        {
           int n;
           cin>>n;

           char s[n+1];
           cin>>s;

           int freq[26];

           for(int i=0;i<26;i++)
           {
            freq[i]=0;
           }

           for(int i=0;i<n;i++)
           {
            freq[s[i]-65]++;
           }
           int ans=0;
           for(int i=0;i<26;i++)
           {
          if(freq[i]!=0){
            ans+=freq[i]+1;
                     }
        }
cout<<ans<<endl;
        
}

}