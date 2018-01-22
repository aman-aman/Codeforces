#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    scanf("%lld",&n);
    ll x[n],h[n];
    for(ll i=0;i<n;i++)
        scanf("%lld%lld",&x[i],&h[i]);

    ll cnt=2;
    for(ll i=1;i<n-1;i++)
    {
        if((x[i]-h[i]>x[i-1]))
            cnt++;
        if((x[i]+h[i]<x[i+1]))
            cnt++;
    }
    printf("%lld\n",cnt);

}
