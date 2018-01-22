#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m,b;
	scanf("%lld%lld",&n,&m);
	vector<ll> a;
	for(ll i=0;i<n;i++)
		scanf("%lld",&b),a.push_back(b);

	sort(a.begin(),a.end());
	ll s=0;
	for(ll i=0;i<m;i++)
		if(a[i]<=0)
			s=s+abs(a[i]);

	printf("%lld\n",s);
}
