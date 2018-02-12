#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,xl=INT_MAX,xr=INT_MIN,yl=INT_MAX,yr=INT_MIN;
    scanf("%lld",&n);
    while(n--)
    {
        ll x,y;
        scanf("%lld%lld",&x,&y);
        xr=max(x,xr);
        xl=min(x,xl);
        yl=min(y,yl);
        yr=max(y,yr);
    }
    ll val=max(yr-yl,xr-xl);
    printf("%lld\n",val*val);
}
