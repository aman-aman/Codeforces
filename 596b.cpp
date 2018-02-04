#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    scanf("%lld",&n);
    ll a[n];
    for(ll i=0;i<n;i++)
        scanf("%lld",&a[i]);

    ll step=abs(a[0]);
    for(ll i=1;i<n;i++)
    {
        step+=abs(a[i]-a[i-1]);
    }
    printf("%lld\n",step);
}
