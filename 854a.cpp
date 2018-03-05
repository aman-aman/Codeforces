#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    for(int i=n/2;i>=1;i--)
    {
        if(__gcd(i,n-i)==1)
        {
            a=min(i,n-i);
            b=max(i,n-i);
            break;
        }
    }
    cout<<a<<" "<<b<<"\n";
}
