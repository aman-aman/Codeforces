#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,t;
    scanf("%d%d%d",&n,&s,&t);
    int p[n+1];
    for(int i=1;i<=n;i++)
		scanf("%d",&p[i]);

	int i=s,c=0,cnt=0;
	while(i!=t&&cnt<n)
	{
		c++;
		cnt++;
		//cout<<i<<" "<<p[i]<<"\n";
		i=p[i];

	}
	if(i==t)
		printf("%d\n",c);
	else
		printf("-1\n");
}
