#include<bits/stdc++.h>
using namespace std;
#define ll int64_t
ll tdiv(ll a)
{
	ll c=0;
	for(ll i=1;i*i<=a;i++)
	{
		if(a%i==0)
		{
			if(i*i==a)
				c++;
			else
				c=c+2;
		}
	}
	if(c==3)
		return true;
	return false;
}
int main()
{
	ll n;
	scanf("%I64d",&n);
	while(n--)
	{
        ll a;
        scanf("%I64d",&a);
        if(tdiv(a))
			printf("YES\n");
		else
			printf("NO\n");
	}
}
