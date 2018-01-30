#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int s[n],d[n];
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
        scanf("%d%d",&s[i],&d[i]);
    ans=s[0];
    for(int i=1;i<n;i++)
    {
        int x=0;
        while(s[i]+x*d[i]<=ans)
            x++;
        ans=s[i]+x*d[i];
    }
    printf("%d\n",ans);
}
