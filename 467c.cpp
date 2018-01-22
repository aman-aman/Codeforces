#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[5050][5050];
int main()
{
    ll n,m,k,val;
    cin>>n>>m>>k;
    vector<ll> a(n+1);
    a[0]=0;

    for (ll i=1;i<=n;i++)
	{
	 for (ll j=0;j<=k;j++)
	  dp[i][j]=-1e18;
	}
    for(ll i=1;i<=n;i++)
	{
		scanf("%lld",&val);
		a[i]=val;
	}
	ll sum[n+1];
	memset(sum,0,sizeof(sum));

	for(ll i=1;i<=n;i++)
		sum[i]=sum[i-1]+a[i];

	for(ll i=1;i<=n;i++)
	{
		for(ll j=0;j<=k;j++)
		{
			dp[i][j]=dp[i-1][j];
			if(i>=m&&j>0)
				dp[i][j]=max(dp[i][j],dp[i-m][j-1]+sum[i]-sum[i-m]);
		}
	}
	cout<<dp[n][k]<<"\n";
}
