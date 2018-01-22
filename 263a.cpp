#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	int cx=2,cy=2,x,y,flag=1;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(a[i][j]==1)
			{
				x=i;y=j;flag=-1;break;
			}
		}
		if(flag==-1)
			break;
	}
	printf("%d\n",abs(cx-x)+abs(cy-y));
}
