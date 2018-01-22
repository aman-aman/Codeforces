#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	char c[n][m];
	int eaten[n][m];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>c[i][j];
			eaten[i][j]=-1;
		}
	}



	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(c[i][j]=='W')
			{
				//cout<<"wolf: "<<i<<" "<<j<<"\n";
				if(c[max(0,i-1)][j]=='P'&&eaten[max(0,i-1)][j]==-1)
				{
					cnt++;
					eaten[max(0,i-1)][j]=1;
					//cout<<"pig: "<<max(0,i-1)<<" "<<j<<"\n";
				}
				else if(c[min(n-1,i+1)][j]=='P'&&eaten[min(n-1,i+1)][j]==-1)
				{
					cnt++;
					eaten[min(n-1,i+1)][j]==1;
					//cout<<"pig: "<<min(n-1,i+1)<<" "<<j<<"\n";
				}
				else if(c[i][max(0,j-1)]=='P'&&eaten[i][max(0,j-1)]==-1)
				{
					cnt++;
					eaten[i][max(0,j-1)]==1;
					//cout<<"pig: "<<i<<" "<<max(0,j-1)<<"\n";
				}
				else if(c[i][min(m-1,j+1)]=='P'&&eaten[i][min(m-1,j+1)]==-1)
				{
					cnt++;
					eaten[i][min(m-1,j+1)]==1;
					//cout<<"pig: "<<i<<" "<<min(m-1,j+1)<<"\n";
				}
			}
		}
	}
	printf("%d\n",cnt);
}
