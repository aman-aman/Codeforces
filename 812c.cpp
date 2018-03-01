#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll calculate(ll k,ll a[],ll n)
{
        ll b[n];
        for(ll i=0;i<n;i++)
            b[i]=a[i]+(i+1)*k;

        sort(b,b+n);
        ll ans=0;
        for(ll i=0;i<k;i++)
            ans+=b[i];

        return ans;
}
int main()
{
    ll n,s;
    scanf("%lld%lld",&n,&s);
    ll a[n];
    for(ll i=0;i<n;i++)
        scanf("%lld",&a[i]);
    ll l=0,r=n+1;
    while(l<r-1)
    {
        ll m=(l+r)/2;
        if(calculate(m,a,n)<=s)
            l=m;
        else
            r=m;

        //cout<<"man\n";
    }
    printf("%lld %lld\n",l,calculate(l,a,n));



}
