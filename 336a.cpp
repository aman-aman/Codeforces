#include<bits/stdc++.h>
using namespace std;
#define ll long long
int sign(ll x)
{
	return (x>0?1:-1);
}
int main()
{
	ll x,y;
	scanf("%lld%lld",&x,&y);
	ll val=abs(x)+abs(y);
	ll x1=val*sign(x),y1=0,x2=0,y2=val*sign(y);
	if(x1<x2)
		printf("%lld %lld %lld %lld\n",x1,y1,x2,y2);
	else
		printf("%lld %lld %lld %lld\n",x2,y2,x1,y1);
}
