#include<bits/stdc++.h>
using namespace std;
int a[31][31];
int main()
{
    int n;
    cin>>n;
    //int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int rsum[n],csum[n];
    memset(rsum,0,sizeof(rsum));
    memset(csum,0,sizeof(csum));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            rsum[i]+=a[i][j];
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<n;i++)
            csum[j]+=a[i][j];
    }
    int ans=0;
    //for(int i=0;i<n;i++)cout<<csum[i]<<" "<<rsum[i]<<"\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(rsum[i]<csum[j])
                ans++;
        }
    }
    printf("%d\n",ans);
}
