#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n);
    //for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<"\n";
    int s=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
                if(a[i]==a[j])
                {
                    a[j]=a[i]+1;
                    s+=abs(a[j]-a[i]);
                }
        }
    }

    printf("%d\n",s);
}

