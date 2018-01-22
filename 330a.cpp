#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n], b[m];
    for(int i=0;i<n;i++)
	{
			a[i]=1;
	}
	for(int i=0;i<m;i++)
	{
			b[i]=1;
	}
	char ch;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ch;
            if(ch=='S') a[i]=0,b[j]=0;
		}
	}
	int c=0,r=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
			c++;
	}
	for(int j=0;j<m;j++)
	{
		if(b[j]==0)
			r++;
	}
	cout<<(n*m-r*c)<<"\n";

}
