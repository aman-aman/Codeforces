#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();

    //int dp[n];
    int cnt=0;
    //memset(dp,0,sizeof(dp));
    for(int i=2;i<n;i++)
    {
        for(int j=1;j<i;j++)
        {
            for(int k=0;k<j;k++)
            {
                if(s[i]=='Q'&&s[j]=='A'&&s[k]=='Q')
                  {
                     // dp[i]++;
                      cnt++;
                     // cout<<i<<" "<<j<<" "<<k<<"\n";
                  }
            }
        }
    }

    cout<<cnt<<"\n";
}
