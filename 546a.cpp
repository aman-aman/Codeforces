#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k,w,cost=0;
    cin>>n>>k>>w;
    for(ll i=1;i<=w;i++)
        cost+=i*n;
    if(cost<k)
        cout<<0<<"\n";
    else
        cout<<cost-k<<"\n";
}
