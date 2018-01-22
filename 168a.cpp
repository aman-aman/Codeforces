#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
   /*float res1=res/100;
   printf("%f\n",res1);
    res=ceil(res1);
    res=res-x;*/
    ll res=max((ll)0,(ceil((n*y)/100)-x));
    printf("%lld\n",max((ll)0,res));
}
