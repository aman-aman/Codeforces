#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,time=0,a,b;
    scanf("%lld",&n);
    vector<pair<ll,ll> >vec;
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&a);
        scanf("%lld",&b);
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end());
    time=min(vec[0].first,vec[0].second);
    for(ll i=1;i<vec.size();i++)
    {
        ll t1=INT_MAX,t2=INT_MAX;
        if(vec[i].first>=time)
            t1=vec[i].first;
        if(vec[i].second>=time)
            t2=vec[i].second;

        ll val=min(t1,t2);
        //cout<<t1<<" "<<t2<<" "<<val<<"\n";
        if(val>time)
            time+=abs(val-time);
    }
    printf("%lld\n",time);
}
