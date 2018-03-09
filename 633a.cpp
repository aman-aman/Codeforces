#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,m,flag=0;
    cin>>a>>b>>c;
    n=floor(c/a)+1;
    m=floor(c/b)+1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i*a+j*b==c)
            {
                flag=1;break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}
