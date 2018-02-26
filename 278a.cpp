#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,totdis=0,s,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        totdis+=a[i];
    }
    scanf("%d%d",&s,&t);
    int l=min(s,t),r=max(s,t),d=0;
    l--;
    r--;
    for(int i=l;i<r;i++)
        d+=a[i];

    int ans=min(totdis-d,d);
    printf("%d\n",ans);
}
