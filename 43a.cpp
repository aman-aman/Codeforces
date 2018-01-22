#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	string name;
	cin>>n;
	map<string,ll> mp;
	while(n--)
	{
		cin>>name;
		mp[name]++;
	}
	int d=-1;
	string res;
	for(auto x:mp)
	{
		if(x.second>d)
		{
			d=x.second;
			res.clear();
			res.append(x.first);
		}
	}
	cout<<res<<"\n";
}
