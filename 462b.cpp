#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<ll> cnt(26,0);
    for(ll i=0;i<s.length();i++)
        cnt[s[i]-'A']++;


    ll ans=0,i=0;
    sort(cnt.begin(),cnt.end(),greater<ll> ());
    //for(auto x:cnt)cout<<x<<" ";cout<<"\n";
    while(k>=cnt[i])
    {
        ans+=(cnt[i]*cnt[i]);
        k=k-cnt[i];
        i++;
    }
    if(k>0)
        ans+=k*k;
    cout<<ans<<"\n";
}
