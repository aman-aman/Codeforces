#include<bits/stdc++.h>
using namespace std;
#define l long
int main()
{
	l n,m,a,b,c;
	cin>>n>>m;
	vector<l> col(n+1,0);
	while(m--)
	{
        cin>>a>>b>>c;
        if(col[a]>0)
		{
			col[b]=1+(col[a]%3);
			col[c]=1+(1+col[a]%3)%3;
		}
		else if(col[b]>0)
		{
			col[a]=1+(col[b]%3);
			col[c]=1+(1+col[b]%3)%3;
		}
		else if(col[c]>0)
		{
			col[b]=1+(col[c]%3);
			col[a]=1+(1+col[c]%3)%3;
		}
		else
		{
			col[a]=1;col[b]=2;col[c]=3;
		}
	}
	for(l i=1;i<=n;i++)
	{
		printf("%ld ",col[i]);
	}
}
