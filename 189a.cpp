#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod=1e7;
#define sc(a) scanf("%lld",&a)
int main()
{
    ll n,a,b,c;
    sc(n);sc(a);sc(b);sc(c);
    ll dp[n+1];
    dp[0]=0;
    for(ll i=1;i<=n;i++)
    {
        ll x=(i>=a)?dp[i-a]:INT_MIN; ll y=(i>=b)?dp[i-b]:INT_MIN; ll z=(i>=c)?dp[i-c]:INT_MIN;
        dp[i]=1+max(z,max(x,y));

    }
    //for(ll i=0;i<=n;i++)cout<<dp[i]<<" ";
    printf("%lld\n",dp[n]);
}
