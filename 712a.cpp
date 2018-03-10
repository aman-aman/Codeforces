#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int a[n];
    a[n-1]=b[n-1];
    for(int i=0;i<n-1;i++)
        a[i]=b[i]+b[i+1];

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
}
