#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[m],b[m];
    for(int i=0;i<m;i++)
        {scanf("%d",&a[i]);b[i]=a[i];}

    int s1=0,s2=0,t=n;
    for(int i=0;i<n;i++)
    {
        sort(a,a+m);
        sort(b,b+m);
        s1+=a[m-1];
        a[m-1]--;
        s2+=b[0];
        b[0]--;
        if(b[0]<=0)
            b[0]=INT_MAX;
    }
    cout<<s1<<" "<<s2<<"\n";
}
