#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,coin=0,avg=0,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    avg=s/2;
    int nc=0,i=0;
    sort(a,a+n,greater<int>());
    while(avg>=coin)
    {
        coin+=a[i];
        nc++;
        i++;
    }
    cout<<nc<<"\n";
}
