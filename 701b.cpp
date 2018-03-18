#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,xn,yn,xo,yo;
    cin>>n>>m;
    ll ans=(n-1)*(n-1);
    set<ll> sx,sy;
    for(ll i=0;i<m;i++)
    {
        cin>>xn>>yn;
        sx.insert(xn);
        sy.insert(yn);
        cout<<(n-sx.size())*(n-sy.size())<<" ";
    }
}
