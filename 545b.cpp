#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];

     ll count=0,flag=0;
     sort(arr,arr+n);
     for (ll i=0;i<n-2;++i)
        {
            ll k=i+2;
            for (ll j=i+1;j<n;++j)
            {
                while(k<n&&arr[i]+arr[j]>arr[k])
                   ++k;
                count+=k-j-1;
                if(count>0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }

    if(flag)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
