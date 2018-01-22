#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,k;
    cin>>n>>k;
    for(int i=n;i>=n-k+1;i--)
	{
		cout<<i<<" ";
	}
    for(int i=1;i<=n-k;i++)
	{
		cout<<i<<" ";
	}
}
