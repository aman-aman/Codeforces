#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m;
	cin>>n>>m;
	ll a[m];
	for(ll i=0;i<m;i++)
			cin>>a[i];

	ll res=a[0]-1;
	for(ll i=0;i<m-1;i++)
	{
		if(a[i]>a[i+1])
			res=res+n-a[i]+a[i+1];
		else
			res=res+a[i+1]-a[i];
	}
	cout<<res<<"\n";
}
