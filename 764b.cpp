#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a;
    scanf("%lld",&n);
    vector<ll> vec;
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&a);
        vec.push_back(a);
    }

    for(ll i=0;i*2<n;i+=2)
        swap(vec[i],vec[n-i-1]);

    for(int i=0;i<n;i++)
        printf("%lld ",vec[i]);
}
