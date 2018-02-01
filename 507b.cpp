#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long r,x1,x2,y1,y2;
   cin>>r>>x1>>y1>>x2>>y2;
    if (x1==x2&&y1==y2)
    {
     cout<<0<<endl;
    }
    double dist=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    dist-=1e-12;
    r*=2;
    long long res=dist/r;
    cout<<res+1<<endl;
}
