#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,v,x,t,y,q;
    scanf("%lld%lld",&n,&m);
    ll a[n];
    for(ll i=0;i<n;i++)
		scanf("%lld",&a[i]);

	while(m--)
	{
        scanf("%lld",&t);
        if(t==1)
		{
			scanf("%lld%lld",&v,&x);
			v--;
			a[v]=x;
		}
		if(t==2)
		{
			scanf("%lld",&y);
			for(ll i=0;i<n;i++)
				a[i]=a[i]+y;

		}
		if(t==3)
		{
			scanf("%lld",&q);
			q--;
			printf("%lld\n",a[q]);
		}
	}
}
