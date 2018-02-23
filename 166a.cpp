#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool comp(pair<ll,ll>it1,pair<ll,ll>it2)
{
    return ((it1.first>it2.first)||(it1.first==it2.first&&it1.second<it2.second));
}
int main()
{
    ll n,k,a,b;
    scanf("%lld%lld",&n,&k);
    vector<pair<ll,ll> >vec;
    map<pair<ll,ll>,ll>mp;
    for(ll i=0;i<n;i++)
    {
        scanf("%lld%lld",&a,&b);
        vec.push_back(make_pair(a,b));
        mp[make_pair(a,b)]++;
    }
    sort(vec.begin(),vec.end(),comp);
    //for(ll i=0;i<n;i++)cout<<vec[i].first<<" "<<vec[i].second<<"\n";

    pair<ll,ll> ip=vec[k-1];
    cout<<mp[ip]<<"\n";
}
