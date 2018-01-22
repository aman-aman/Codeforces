#include<bits/stdc++.h>
using namespace std;
bool can(int a,int b)
{
    if(a==3||b==3)
        return false;
    return true;
    /*if(b==0)
        return true;
    else if((b==1&&a==2)||(b==2&&a==1))
        return true;
    else
        return false;*/
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int dp[n];
    memset(dp,0,sizeof(dp));
    dp[0]=(a[0]==0)?0:1;
    for(int i=1;i<n;i++)
    {
        dp[i]=can(a[i],a[i-1])?1:0;
    }
    int ans=n;
    for(int i=0;i<n;i++)
        cout<<dp[i]<<" ";
    //printf("%d\n",ans);
}
