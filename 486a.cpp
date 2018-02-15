#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll n,s=0;
    scanf("%lld",&n);
    if(n%2==0)
        s=n/2;
    else
        s=-(n+1)/2;
    printf("%lld\n",s);
}
