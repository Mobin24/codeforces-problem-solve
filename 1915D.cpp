
//https://codeforces.com/contest/1915/problem/D

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
            cin>>s ;


            char s2[n+1];

            for(int i=0;i<n;i++)
            {
                if(s[i]=='a' || s[i]=='e')
                {
                    s2[i]='V';
                }
                else s2[i]='C';
            }

            for(int i=0;i<n;i++)
            {
                if(i+2==n)
                {
                    cout<<s[i]<<s[i+1];
                    break;
                }
                else if(i+2==n-1)
                {
                    cout<<s[i]<<s[i+1]<<s[i+2];
                    break;
                }
                if(s2[i+3]=='V'){
                printf("%c%c.",s[i],s[i+1]);
                i++;
            }
            else{
                printf("%c%c%c.",s[i],s[i+1],s[i+2]);
                i+=2;
            }
            }
            cout<<endl;
        }

        
}