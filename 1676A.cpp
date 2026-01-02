//https://codeforces.com/contest/1676/problem/A
//others solve
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
        int t;
        cin>>t;
        while (t--)
        {
            char s[7];
            cin>>s;
            int frst=((s[0]-48)+(s[1]-48)+(s[2]-48));
            int lst=((s[3]-48)+(s[4]-48)+(s[5]-48));

            if(frst==lst){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }

        

}
