#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,t,temp;
    scanf("%lld%lld",&n,&t);
    temp=t;
    ll a[n];
    for(ll i=0;i<n;i++)
        scanf("%lld",&a[i]);

    ll b[n];
    memset(b,0,sizeof(b));
    b[0]=a[0];
    for(ll i=1;i<n;i++)
        b[i]=b[i-1]+a[i];

    ll ans=0,maxans=0;
    for(ll i=0;i<n;i++)
    {
        if(a[i]<=t)
            ans=upper_bound(b+i,b+n,b[i]+t-a[i])-(b+i);
        maxans=max(ans,maxans);
    }
    printf("%lld\n",maxans);
}
