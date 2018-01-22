#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll counts(ll n)
{
	ll c=0;
	while(n)
	{
		n=n&(n-1);
		c++;
	}
	return c;
}
int main()
{
	ll n,m,k;
	scanf("%lld%lld%lld",&n,&m,&k);
	ll x[m+1];
	vector<bool> used(m+1,false);
	for(ll i=0;i<m+1;i++)
		scanf("%lld",&x[i]);


	ll c=0;
	ll b=x[m];
	for(ll i=0;i<m;i++)
	{
		if(counts(x[i]^b)<=k)
		{
			c++;
		}
	}
	printf("%lld\n",c);
}

