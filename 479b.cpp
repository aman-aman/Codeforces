#include<bits/stdc++.h>
using namespace std;
int getmax(int a[],int n)
{
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[index])
            index=i;
    }
    return index;
}
int getmin(int a[],int n)
{
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[index])
            index=i;
    }
    return index;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    vector<pair<int,int> > vec;
    int cnt=0;
    while(k--)
    {
        int imax=getmax(a,n);
        int imin=getmin(a,n);
        if(a[imax]-a[imin]==0)
            break;
        a[imax]--;
        a[imin]++;
        vec.push_back(make_pair(imax+1,imin+1));
        cnt++;
    }
    printf("%d %d\n",a[getmax(a,n)]-a[getmin(a,n)],cnt);
    for(auto x:vec)
        cout<<x.first<<" "<<x.second<<"\n";
}
