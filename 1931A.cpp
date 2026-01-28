//https://codeforces.com/contest/1931/problem/A

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
        bool ga=false;
        for(char f='a';f<='z';f++)
        {
            for(char s='a';s<='z';s++)
            {
                for(char t='a';t<='z';t++)
                {
                    int fv=f-'a'+1;
                    int sv=s-'a'+1;
                    int tv=t-'a'+1;
                    if(fv+sv+tv==n)
                    {
                        ga=true;
                        cout<<f<<s<<t<<endl;
                        break;
 
                    }
                }
                if(ga)break;
            }
            if(ga)break;
        }
    }
    
}