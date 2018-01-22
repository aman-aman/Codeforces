#include<bits/stdc++.h>
using namespace std;
#define l long
int main()
{
    l n,k;
    scanf("%ld%ld",&n,&k);
    l a[n+1];
    for(l i=1;i<=n;i++)
		scanf("%ld",&a[i]);
    l dp[n+1];
    dp[0]=0;
    for(l i=1;i<=n;i++)
	{
		dp[i]=dp[i-1]+a[i];
	}
	l res=INT_MAX,ans;
	for(l i=n;i>=k;i--)
	{
		if(res>dp[i]-dp[i-k])
		{
			res=dp[i]-dp[i-k];
			ans=i-k+1;
		}
	}
	printf("%ld\n",ans);
}
