#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,a,m;
    scanf("%lld",&n);
    scanf("%lld",&m);
    scanf("%lld",&a);
    ll l=n/a;
    ll b=m/a;
    if(n%a!=0)
        l++;
    if(m%a!=0)
        b++;
    printf("%lld\n",l*b);
}
