#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m)
        cout<<n-m<<"\n";
    else
    {
        int cnt=0;
        while(n<m)
        {
             if(m%2==0)
                m=m/2;
             else
                m++;
            cnt++;
        }
        cout<<abs(cnt+n-m)<<"\n";
    }
}
