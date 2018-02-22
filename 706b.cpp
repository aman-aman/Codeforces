#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,u;
    scanf("%lld",&n);
    vector<ll> a;
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&u);
        a.push_back(u);
    }
    sort(a.begin(),a.end());
    ll q;
    scanf("%lld",&q);
    while(q--)
    {
        ll val;
        scanf("%lld",&val);
        ll pos=upper_bound(a.begin(),a.end(),val)-a.begin();
        //if(binary_search(a.begin(),a.end(),val))pos++;

        printf("%lld\n",pos);
    }
}
