//https://codeforces.com/problemset/problem/2009/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        while (n--)
        {
               int a,b;
               cin>>a>>b;
               int max=1000;
               for(int c=a;c<=b;c++)
               {
                int newrest=(c-a)+(b-c);
                max=min(max,newrest);

               }
               cout<<max<<endl;

        }      
}

