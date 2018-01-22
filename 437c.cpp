#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,u,v;
	scanf("%d%d",&n,&m);
	int a[n+1];
    for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		//mp.push_back(make_pair(a,i+1));
	}
	int res=0;
	for(int i=0;i<m;i++)
	{
		scanf("%d%d",&u,&v);
		res=res+min(a[u],a[v]);

	}
	printf("%d\n",res);
}
