#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    vector<int> res,used(n,-1);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    int sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=sum)
        {
            res.push_back(a[i]);
            sum+=a[i];
            used[i]=1;
            cnt++;
        }
    }
    /*for(int i=0;i<n;i++)
    {
        if(used[i]==-1)
            res.push_back(a[i]);
    }*/

    printf("%d\n",cnt);
}
