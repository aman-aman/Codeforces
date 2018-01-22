#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool> prime(1000001,true);
void seive()
{
	prime[0]=false;
	prime[1]=false;
	for(ll i=2;i*i<=1000000;i++)
	{
		if(prime[i]==true)
		{
			for(ll j=i*2;j<=1000000;j=j+i)
				prime[j]=false;
		}
	}
}
	//for(ll i=0;i<=10000;i++)if(prime[i])cout<<i<<" ";
ll binary(ll left,ll right,ll n)
{
    if (left<=right)
    {
        int mid = (left + right)/2;
        if (mid == 0 || mid == prime.size()-1)
            return prime[mid];

        if (prime[mid] == n)
            return prime[mid-1];

        if (prime[mid] < n && prime[mid+1] > n)
            return prime[mid];
        if (n < prime[mid])
            return binary(left, mid-1, n);
        else
            return binary(mid+1, right, n);
    }
    return 0;
}
int main()
{
	ll n,m;
	seive();
	cin>>n>>m;
	ll res=1e7;
	ll mat[n][m];
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			cin>>mat[i][j];
		}
	}

    for(ll i=0;i<n;i++)
	{
		ll c=0;
		for(ll j=0;j<m;j++)
		{
            if(prime[mat[i][j]]==false)
				c=c+abs(binary(0,100001,mat[j][i])-mat[j][i]);
		}
		res=min(res,c);
	}
	for(ll i=0;i<m;i++)
	{
		ll c=0;
		for(ll j=0;j<n;j++)
		{
            if(prime[mat[j][i]]==false)
				c=c+abs(binary(0,100001,mat[j][i])-mat[j][i]);
		}
		res=min(res,c);
	}
	cout<<res<<"\n";
}
