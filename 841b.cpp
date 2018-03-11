#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,e=0,o=0;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        scanf("%I64d",&a);
        if(a%2==0)
            e++;
        else
            o++;

    }
    if(e==n)
        cout<<"Second\n";
    else
        cout<<"First\n";
}
