#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int ans=min(k2,min(k5,k6));
    int val=ans;
    ans=256*ans;
    k2-=val;
    k5-=val;
    k6-=val;

    int val1=min(k3,k2);
    ans+=val1*32;
    cout<<ans<<"\n";
}
