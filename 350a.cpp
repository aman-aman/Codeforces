#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int v=*max_element(a,a+n),w=*min_element(a,a+n);
    int u=*min_element(b,b+m);
    if(max(2*w,v)<u)
        cout<<max(2*w,v)<<"\n";
    else
        cout<<-1<<"\n";
}
