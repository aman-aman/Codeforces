#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];

    vector<int> mp(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(a[i]<=n)
             mp[a[i]]=1;
    }


    int s=0;
    for(int i=1;i<=n;i++)
    {
        if(mp[i]==0)
            s++;
    }
    cout<<s<<"\n";


}
