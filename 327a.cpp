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

    ll sum=0,ans=-1;
    for(ll i=0;i<n;i++)
        sum+=a[i];

    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            ll one=0,zero=0;
            for(ll k=i;k<=j;k++)
            {
                if(a[k]==1)
                    one++;
                else
                    zero++;
            }
            if(one==0&&zero==0)
                continue;
            ans=(ans<sum-one+zero)?sum-one+zero:ans;
        }
    }
    printf("%lld\n",ans);
}
