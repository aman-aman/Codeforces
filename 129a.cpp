#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++)
		scanf("%lld",&a[i]);

	ll s=0;
	for(ll i=0;i<n;i++)
		s=s+a[i];

	ll c=0;
	for(ll i=0;i<n;i++)
	{
		if((s-a[i])%2==0)
			c++;
	}
	printf("%lld\n",c);


}
