#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    scanf("%lld%lld",&n,&k);
    ll a[n];
    for(ll i=0;i<n;i++)
		scanf("%lld",&a[i]);


	for(ll i=0;i<n,k>0;i++)
	{
			if(a[i]<0)
			{
				a[i]=-a[i];
				k--;
			}
			else
				break;
	}

	sort(a,a+n);
	if(k>0)
	{
		if(k%2)
			a[0]=-a[0];
	}
	ll s=0;
	for(ll i=0;i<n;i++)
		s=s+a[i];

	printf("%lld\n",s);

}
