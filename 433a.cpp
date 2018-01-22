
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
	scanf("%lld",&n);
	ll a,p1=0,p2=0;
	for(ll i=0;i<n;i++)
	{
		scanf("%lld",&a);
		if(p1<=p2)
			p1=p1+a;
		else
			p2=p2+a;
	}
	if(p1==p2)
		cout<<"YES\n";
	else
		cout<<"NO\n";


}

