#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    scanf("%lld%lld",&n,&k);
    ll a[n];
    for(ll i=0;i<n;i++)
        scanf("%lld",&a[i]);

    ll cnt=0,r=0;
    for(ll l=0;l<n-1;l++)
    {
        while(r<n&&a[r]-a[l]<=k)
            r++;
        r--;
        ll val=r-l;
        cnt+=val*(val-1)/2;
    }
    printf("%lld\n",cnt);
}
