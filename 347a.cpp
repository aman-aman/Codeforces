#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	scanf("%lld",&n);
	ll b;
	vector<ll> a;
	for(ll i=0;i<n;i++)
		scanf("%lld",&b),a.push_back(b);

	sort(a.rbegin(),a.rend());
	sort(a.begin()+1,a.end()-1);
	for(ll i=0;i<a.size();i++)
		printf("%lld ",a[i]);
}
