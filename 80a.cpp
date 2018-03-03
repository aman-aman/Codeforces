#include<bits/stdc++.h>
using namespace std;
bool prime[101];
void seive()
{
    int n=100;
    memset(prime,true,sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for (int p=2;p*p<=n;p++)
    {
        if (prime[p]==true)
        {
            for (int i=p*2;i<=n;i+=p)
                prime[i] = false;
        }
    }
}
int main()
{
    int n,m,ans;
    seive();
    cin>>n>>m;
    ans=n;
    for(int i=0;i<101;i++)
    {
        if(prime[i]==true&&i>n)
        {
            ans=i;break;
        }
    }
    if(ans==m)
        cout<<"YES\n";
    else
        cout<<"NO\n";

}
