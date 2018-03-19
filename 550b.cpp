#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,l,r,x,cnt=0;
    cin>>n>>l>>r>>x;
    ll c[n];
    for(ll i=0;i<n;i++)
        cin>>c[i];

    for(ll i=0;i<pow(2,n);i++)
    {
        ll s=0,minval=1000000001,maxval=0;
        for(ll j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                s+=c[j];
                minval=min(minval,c[j]);
                maxval=max(maxval,c[j]);
            }
        }
        if(s<=r&&s>=l&&(maxval>=minval+x))
            cnt++;
    }
    cout<<cnt<<"\n";
}
