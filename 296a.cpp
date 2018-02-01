#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        vector<int> mp(1001,0);
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        int flag=1;
        for(int i=0;i<n;i++)
        {
            if(mp[a[i]]>(n+1)/2)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("YES\n");
        else
            printf("NO\n");
}
