//https://codeforces.com/contest/1633/problem/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
       if(n<10)cout<<7<<endl;
       else if(n%7==0)cout<<n<<endl;
       else{
        n=n/10;
        n=n*10;
        for(int i=n;i<n+10;i++)
        {
            if(i%7==0)
            {
                cout<<i<<endl;
                break;
            }
        }
       }
 
        
       }
    
    
}