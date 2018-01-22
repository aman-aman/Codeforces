#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool> prime(10000001,true);
void seive()
{

	for(ll i=2;i*i<=10000000;i++)
	{
		if(prime[i]==true)
		{
			for(ll j=i*2;j<=10000000;j=j+i)
			{
				prime[j]=false;
			}
		}
	}
}
int main()
{
    seive();
    ll n;
    cin>>n;
    for(int i=2;i<=10000000&&n>0;i++)
	{
		if(prime[i]==true)
		{
			cout<<i<<" ";
			n--;
		}
	}
}
