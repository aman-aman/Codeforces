#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b;
    cin>>a>>b;
    char ch;
    ll val,cnt=0;
    while(a--)
    {
        cin>>ch>>val;
        if(ch=='+')
            b+=val;
        else
        {
            if(b>=val)
                b-=val;
            else
                cnt++;
        }
    }
    cout<<b<<" "<<cnt<<"\n";
}
