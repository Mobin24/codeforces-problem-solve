//https://codeforces.com/contest/1915/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       char grid[3][4];
       for(int row=0;row<3;row++)
       {
        cin>>grid[row];
       }
 
       int qmarkRow=0;
       for(int row=0;row<3;row++)
       {
        for(int col=0;col<3;col++)
        {
            if(grid[row][col]=='?')
            qmarkRow=row;
        }
       }
       for(char ch='A';ch<='C';ch++)
       {
        bool isbad=false;
        for(int col=0;col<3;col++)
        {
            if(grid[qmarkRow][col]==ch)
            {
                isbad=true;
            }
        }
        if(!isbad)cout<<ch<<endl;
        
       }
    }
    
}