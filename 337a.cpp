#include<bits/stdc++.h>
using namespace std;
#define ll int
int main()
{
	ll n,m;
	scanf("%d%d",&n,&m);
	ll a[m];
	for(ll i=0;i<m;i++)
		scanf("%d",&a[i]);

	sort(a,a+m);
	ll d=INT_MAX;
	for(ll i=0;i<m-n+1;i++)
	{
			int val=a[i+n-1]-a[i];
			//cout<<val<<"\n";
			d=min(d,val);
	}
	printf("%d\n",d);

}
