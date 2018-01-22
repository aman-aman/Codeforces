#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,s,a,b;
    scanf("%lld%lld",&s,&n);
    vector<pair<ll,ll> > p(n);
    for(ll i=0;i<n;i++)
	{
		scanf("%lld",&a);
		scanf("%lld",&b);
		p[i].first=a;
		p[i].second=b;
	}

	sort(p.begin(),p.end());
	ll i;
	for(i=0;i<n&&s>p[i].first;i++)
	{
		s=s+p[i].second;
	}
	if(i==n)
		printf("YES\n");
	else
		printf("NO\n");
}
