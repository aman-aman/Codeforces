#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
        scanf("%d%d",&a[i],&b[i]);

    int mincost=b[0];
    int cost=a[0]*b[0];
    for(int i=1;i<n;i++)
    {
         cost+=a[i]*min(mincost,b[i]);
         mincost=min(mincost,b[i]);
    }

    printf("%d\n",cost);
}
