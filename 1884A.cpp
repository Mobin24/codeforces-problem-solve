//https://codeforces.com/contest/1884/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,k;
        cin>>x>>k;
        for(int y=x; ;y++)
        {
            int sum=0;
            int val=y;
            while(val>0)
            {
                sum=sum+val%10;
                val=val/10;
 
            }
            if(sum%k==0)
            {
                cout<<y<<endl;
                break;
            }
        }
 
    }
    
}