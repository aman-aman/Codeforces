#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,k;
	scanf("%lld%lld",&n,&k);
	ll f[n],t[n];
	for(ll i=0;i<n;i++)
		scanf("%lld%lld",&f[i],&t[i]);

	ll joy=-2147483648;
	for(ll i=0;i<n;i++)
	{
		if(t[i]>k)
			joy=max(joy,(f[i]-(t[i]-k)));
		else
			joy=max(joy,f[i]);

		//cout<<f[i]<<" "<<t[i]<<" "<<joy<<"\n";
	}
	printf("%lld\n",joy);

}
