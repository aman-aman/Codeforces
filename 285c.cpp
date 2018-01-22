#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    scanf("%lld",&n);
    ll a[n+1];
    for(ll i=1;i<=n;i++)
		cin>>a[i];

	ll s=0;
	sort(a+1,a+n+1);
	for(ll i=1;i<=n;i++)
		s=s+abs(i-a[i]);

	cout<<s<<"\n";
}
