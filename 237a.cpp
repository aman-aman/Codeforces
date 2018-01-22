#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,m,h0,m0,c=1;
    scanf("%d",&n);
    scanf("%d%d",&h0,&m0);
    int res=1;
    for(int i=1;i<n;i++)
	{
		scanf("%d%d",&h,&m);
		if(h==h0&&m==m0)
		{
			c++;
			if(c>res)
				res=c;
		}
		else
		{
			c=1;
		}
		h0=h;m0=m;
	}
	cout<<res<<"\n";
}
