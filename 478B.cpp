#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,m;
	scanf("%lld%lld",&n,&m);
	ll maxi=n-m+1;
	ll kmax=(maxi*(maxi-1))/2;
	ll mi=n/m;
	ll kmin=(mi*(mi-1))/2;
	if(n%m==0)
	{
		kmin=kmin*m;
	}
	else{
		ll left=m-(n%m);
		kmin=kmin*(left);
		ll val=(mi*(mi+1))/2;
		kmin=kmin+val*(n%m);
	}
	printf("%lld %lld\n",kmin,kmax);
}
