#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=5-k)
            cnt++;
    }
    if(cnt<3)
        cout<<0<<"\n";
    else
        cout<<cnt/3<<"\n";
}
