#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
            b[i]=a[i];
        else
            b[i]=a[i]+b[i-1];
    }

    int q;
    scanf("%d",&q);
    while(q--)
    {
        int ind;
        scanf("%d",&ind);
        ind--;
        int l=0,h=n-1,box;
        while(l<=h)
        {
            int m=(l+h)/2;
            if(b[m]>ind)
                {
                    h=m-1;
                    box=m+1;
                }
            else
                l=m+1;
        }
        printf("%d\n",box);
    }
}
