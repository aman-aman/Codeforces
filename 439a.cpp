#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    int a,s=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        s+=a;
    }
        if((n-1)*10+s<=d)
            cout<<(d-s)/5<<"\n";
        else
            cout<<-1<<"\n";
}
