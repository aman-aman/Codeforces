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


    if(k>n)
        cout<<-1<<"\n";
    else
    {
            sort(a,a+n);
    reverse(a,a+n);
    ll last;
    for(ll i=0;i<k;i++)
        last=a[i];

    printf("%lld %lld\n",last,last);
    }
}
