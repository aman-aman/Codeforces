#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    cout<<__builtin_popcount(n);
    /*
    scanf("%d",&n);
    int v[n+1];
    for(int i=1;i<=n;i++)
        scanf("%d",&v[i]);

    long long dp1[n],dp2[n];

    dp1[0]=0;
    for(int i=2;i<=n;i++)
        dp1[i]=dp1[i-1]+v[i];

    sort(v,v+n);
    dp2[0]=0;
    for(int i=2;i<=n;i++)
        dp2[i]=dp2[i-1]+v[i];

    int m;
    scanf("%d",&m);
    while(m--)
    {
        int t,l,r;
        scanf("%d%d%d",&t,&l,&r);

        if(t==1)
        {
            printf("%I64d""\n",dp1[r]-dp1[l-1]);
        }
        if(t==2)
        {
            printf("%I64d""\n",dp2[r]-dp2[l-1]);
        }
    }*/
}
