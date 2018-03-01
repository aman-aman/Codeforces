#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,d,u,v;
    cin>>n>>d;
    vector<pair<ll,ll> >vec;
    for(ll i=0;i<n;i++)
    {
        scanf("%lld%lld",&u,&v);
        vec.push_back(make_pair(u,v));
    }
    sort(vec.begin(),vec.end());

    ll l=0,h=0;
    ll ans=0,cur=0;
    while(h<n)
    {
        if(vec[h].first-vec[l].first<d)
        {
            cur+=vec[h].second;
            h++;
        }
        else
        {
            cur-=vec[l].second;
            l++;
        }
        ans=max(ans,cur);
    }
    printf("%lld\n",ans);
}
