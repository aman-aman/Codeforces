#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int dp[n+1];
    memset(dp,0,sizeof(dp));
    dp[1]=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
            dp[i+1]=dp[i]+1;
        else
            dp[i+1]=dp[i];
    }

    //for(int i=0;i<n;i++)cout<<dp[i]<<" ";cout<<"\n";

    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,h;
        scanf("%d%d",&l,&h);
        printf("%d\n",dp[h]-dp[l]);
    }
}
