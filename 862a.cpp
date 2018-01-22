#include<bits/stdc++.h>
using namespace std;
set<int> s;
int c=0;
int mex()
{
	int x=0;
	while(s.find(x)!=s.end())
	{
		x++;
	}
	s.insert(x);
	c++;
	return x;
}
int main()
{
    int n,x,v;
    cin>>n>>x;

    for(int i=0;i<n;i++)
	{
		cin>>v;
		s.insert(v);
	}
	//int c=0;
	while(mex()!=x)
	{
	}
	cout<<c-1<<"\n";
}
