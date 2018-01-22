#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll r,b,g;
	scanf("%lld%lld%lld",&r,&b,&g);
	ll ans=r/3+g/3+b/3;
	if(r>=1&&g>=1&&b>=1)
		ans=max(ans,1+(r-1)/3+(g-1)/3+(b-1)/3);
	if(r>=2&&g>=2&&b>=2)
		ans=max(ans,2+(r-2)/3+(g-2)/3+(b-2)/3);

	printf("%lld\n",ans);
}
