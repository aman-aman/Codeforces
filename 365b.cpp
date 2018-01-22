#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isperfect(ll num)
{
    ll n = sqrt(num);
    return (n*n == num);
}
int main()
{
	ll n;
	scanf("%lld",&n);
	ll a[n];
	for(ll i=0;i<n;i++)
		scanf("%lld",&a[i]);
	ll l=0,r=1,res=1;
	while(r<n&&l<n-1)
	{
		if(a[r+1]==a[r]+a[r-1]&&r<n-1)
			++r;
		else
		{
            res=max(res,r-l+1);
            l=r;r=l+1;
		}
	}
	printf("%lld\n",res);


}
