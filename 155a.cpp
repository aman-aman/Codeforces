#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int main()
{
	ll n,val,c=0;
	scanf("%lld",&n);
	vector<ll> a;
	scanf("%lld",&val);
	a.push_back(val);
	for(ll i=1;i<n;i++)
	{
		scanf("%lld",&val);
		if(val>*max_element(a.begin(),a.end()))
			c++;
		if(val<*min_element(a.begin(),a.end()))
			c++;

		a.push_back(val);
	}
	printf("%lld\n",c);
}
