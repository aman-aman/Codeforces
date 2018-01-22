#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b;
    cin>>a>>b;
    if(a==1&&b==1)
        cout<<0<<"\n";
    else
    {
     int minj=min(a,b);
        int maxj=max(a,b);
        int cnt=0;
        while(minj>0&&maxj>0)
        {
            cnt++;
            int v1=minj+1;
            int v2=maxj-2;
            minj=min(v1,v2);
            maxj=max(v1,v2);

        }
        cout<<cnt<<"\n";
    }
}
