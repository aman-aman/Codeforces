#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int mindiff=INT_MAX;
    for(int i=1;i<n-1;i++)
    {
        vector<int> v;
        int diff=INT_MIN;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
                v.push_back(a[j]);
        }
        for(int j=1;j<v.size();j++)
        {
            diff=max(diff,v[j]-v[j-1]);
        }
        mindiff=min(mindiff,diff);
    }
    printf("%d\n",mindiff);
}
