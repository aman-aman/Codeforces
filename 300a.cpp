#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	vector<int> used(2001,-1);
	vector<int> s1,s2,s3;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0&&used[i]==-1)
		{
			s1.push_back(a[i]);
			used[i]=1;
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>0&&used[i]==-1)
		{
			s2.push_back(a[i]);
			used[i]=1;
			break;
		}
	}
	if(s2.size()==0)
	{
		int c=2;
		for(int i=0;i<n&&c>=1;i++)
		{
			if(a[i]<0&&used[i]==-1&&c--)
			{
				s2.push_back(a[i]);
				used[i]=1;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		if(used[i]==-1)
		{
			s3.push_back(a[i]);
			used[i]=1;
		}
	}
	cout<<s1.size()<<" ";
	for(int i=0;i<s1.size();i++)
		cout<<s1[i]<<" ";
	cout<<"\n";

	cout<<s2.size()<<" ";
	for(int i=0;i<s2.size();i++)
		cout<<s2[i]<<" ";
	cout<<"\n";

	cout<<s3.size()<<" ";
	for(int i=0;i<s3.size();i++)
		cout<<s3[i]<<" ";
	cout<<"\n";
}
