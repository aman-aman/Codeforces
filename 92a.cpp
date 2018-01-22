#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	m=m%((n*(n+1))/2);
	for(int i=1;i<=n;i++)
	{
		if(m<i)break;
        m=m-i;
	}
	printf("%d\n",m);
}
