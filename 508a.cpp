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

    ll maxl=1,len=1;
    for(ll i=1;i<n;i++)
    {
        if(a[i]>=a[i-1])
        {
            len++;
            maxl=max(len,maxl);
        }
        else
        {
            len=1;
        }
    }

    printf("%lld\n",maxl);
}
