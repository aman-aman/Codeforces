#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,res=0,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<3;j++)
        {
            cin>>a;
            if(a==1)
                cnt++;
        }
        if(cnt>1)
            res++;
    }
    cout<<res<<"\n";
}
