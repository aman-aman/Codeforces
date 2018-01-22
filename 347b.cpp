#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
	int a[n];
    for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==a[i])
			c++;
	}
	int flag=-1;
	for(int i=0;i<n;i++)
	{
		if(i!=a[i])
		{
			if(a[a[i]]==i)
			{
				c=c+2;
				flag=1;
				break;
			}
		}
	}
	if(flag==-1&&c!=n)
	{
		c++;
	}
	printf("%d\n",c);
}
