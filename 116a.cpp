#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	int a,b,s=0;
	scanf("%d%d",&a,&b);
	s=b-a;
	int res=s;
	for(int i=1;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		s=s+(b-a);
		res=max(res,s);
	}
	printf("%d\n",res);
}
