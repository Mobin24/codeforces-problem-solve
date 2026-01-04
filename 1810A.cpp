//https://codeforces.com/problemset/problem/1810/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        while (n--)
        {
                int x;
                cin>>x;
                int flag=0;
                int value;
                for(int i=1;i<=x;i++)
                {
                        cin>>value;
                        if(value<=i)
                        {
                                flag=1;
                        }
                }
                if(flag==1)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
        }
        
    
        
           
        
}

