#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,l;
    scanf("%lld%lld",&n,&m);
    set<ll> s;
    ll dp[n];
    ll a[n];
    for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}

	for(ll i=n-1;i>=0;i--)
	{
		if(s.find(a[i])==s.end())
		{
			s.insert(a[i]);
			dp[i]=s.size();
		}
		else
		{
            dp[i]=dp[i+1];
		}
	}
	/*for(int i=0;i<n;i++)
		cout<<dp[i]<<" ";*/
	while(m--)
	{
		scanf("%lld",&l);
		printf("%lld\n",dp[l-1]);
	}
}
