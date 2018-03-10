#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    int a[n];
    k--;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int val=a[k];
    for(int i=0;i<n;i++)
    {
        if(a[i]>=val&&a[i]>0)
            ans++;
    }
    cout<<ans<<"\n";

}
