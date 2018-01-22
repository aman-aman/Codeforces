#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    vector<list<int> >adj;
    for(int i=0;i<n;i++)
	{
		int t,val,k;
		scanf("%d",&k);
		scanf("%d",&val);
		for(int j=1;j<k;j++)
		{
			scanf("%d",&t);
			adj[val].push_back(t);
			adj[t].push_back(val);
		}
	}
	for(int i=0;i<n;i++)
		cout<<adj[i].size()<<"\n";
}
