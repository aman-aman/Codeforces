#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	string s1[m],s2[m];
	map<string,string> mp;
	for(int i=0;i<m;i++)
	{
		cin>>s1[i]>>s2[i];
		if(s1[i].length()<=s2[i].length())
		{
			mp[s2[i]]=s1[i];
			mp[s1[i]]=s1[i];
		}
		else
		{
			mp[s1[i]]=s2[i];
			mp[s2[i]]=s2[i];
		}
	}
	string res[n];
	string str;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		res[i]=mp[str];
	}

	for(int i=0;i<n;i++)
		cout<<res[i]<<" ";
	cout<<"\n";

}
