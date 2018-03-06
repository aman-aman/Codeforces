#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e=0,o=0;
    cin>>n;
    int a;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a%2==0)
            e++;
        else
            o++;
        mp[a%2]=i+1;
    }
    if(e==1)
        cout<<mp[0]<<"\n";
    else if(o==1)
        cout<<mp[1]<<"\n";
}
