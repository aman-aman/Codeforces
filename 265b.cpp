#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int time=-1,curh=0;
    for(int i=0;i<n;i++)
    {
        if(curh>a[i])
            time+=curh-a[i]+1;
        else
            time+=a[i]-curh+1;
        curh=a[i];
        time++;
    }
    cout<<time<<"\n";
}
