#include<bits/stdc++.h>
using namespace std;
#define ll long long
int getval(set<int > s)
{
	int c=1;
	while(s.find(c)!=s.end())
		c++;

	return c;
}
int main()
{
	int n,a;
	scanf("%d",&n);
	set<int> s;
	for(ll i=0;i<n;i++)
	{
		scanf("%d",&a);
		s.insert(a);
	}
	ll res=getval(s);
	printf("%d\n",res);
}
