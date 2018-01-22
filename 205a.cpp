#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,a,d=INT_MAX;
	map<ll,pair<ll,ll> > mp;
	set<ll> s;
	scanf("%lld",&n);
	for(ll i=0;i<n;i++)
	{
		scanf("%lld",&a);
		mp[a].first=mp[a].first+1;
		mp[a].second=i+1;
		d=min(d,a);
		s.insert(a);
	}
	if(s.size()==n)
	{
		printf("%lld\n",mp[d].second);
	}
	else
	{
		if(mp[d].first==1)
			printf("%lld\n",mp[d].second);
		else
			printf("Still Rozdil\n");
	}
}
