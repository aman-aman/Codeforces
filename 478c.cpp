#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    vector<ll> v(3);
    scanf("%lld%lld%lld",&v[0],&v[1],&v[2]);
    sort(v.begin(),v.end());
    ll avg=(v[0]+v[1]+v[2])/3;
    avg=min(avg,v[0]+v[1]);
    printf("%lld\n",avg);
}
