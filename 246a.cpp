#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int val=n;
    if(n<=2)
        cout<<-1<<"\n";
    else
    {
        for(int i=0;i<n;i++)
        a[i]=val--;

        /*for(int i=1;i<=n-1;i++)
        {
            for(int j=i;j<=n-1;j++)
            {
                if(a[j]>a[j+1])
                    swap(a[j],a[j+1]);
            }
        }*/
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
}
