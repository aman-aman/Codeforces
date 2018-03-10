#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h[n],a[n];
    for(int i=0;i<n;i++)
        cin>>h[i]>>a[i];

    int ans=0;
    for(int i=0;i<n;i++)
        ans+=count(h,h+n,a[i]);

    cout<<ans<<"\n";
}
