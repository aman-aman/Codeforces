#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n*n+1];
	for(int i=0;i<=n*n;i++)
		a[i]=i;

	for(int i=1;i<=(n*n)/2;i++)
	{
		cout<<a[i]<<" "<<a[n*n-i+1]<<"\n";
	}
}
