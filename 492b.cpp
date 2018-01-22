#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,l;
	scanf("%lld%lld",&n,&l);
	double a[n];
	for(ll i=0;i<n;i++)
		scanf("%lf",&a[i]);
	sort(a,a+n);
	double sep=max(a[0],abs(l-a[n-1]));
	for(ll i=1;i<n;i++)
	{
		sep=max((a[i]-a[i-1])/2,sep);
	}
	printf("%0.10f\n",sep);
	//cout<<sep<<"\n";
}

