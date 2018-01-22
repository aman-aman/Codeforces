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

    ll res=1,maxres=1;
    for(ll i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            res++;
            maxres=max(res,maxres);
        }
        else
            res=1;
    }
    printf("%lld\n",maxres);
}
