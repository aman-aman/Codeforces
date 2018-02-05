#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m,a;
    scanf("%lld%lld",&n,&m);
    set<ll> st;
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&a);
        st.insert(a);
    }
    ll x=1;
    vector<ll> res;

    while(m>=x)
    {
        if(st.find(x)==st.end())
        {
            m=m-x;
            st.insert(x);
            res.push_back(x);
        }
        x++;
    }
    cout<<res.size()<<"\n";
    for(auto v:res)
        cout<<v<<" ";
    cout<<"\n";

}
