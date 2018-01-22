#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);

	int c=n;
	 for(int j=0;j<n;j++)
	 {
	 	for(int i=0;i<n;i++)
		{
			if(i==j)
				continue;
			if(a[i]==b[j])
				{c--;a[i]=0;}
	 }
	 }

	printf("%d\n",c);
}
