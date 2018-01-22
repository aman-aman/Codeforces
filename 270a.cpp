#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a;
	cin>>t;
	while(t--)
	{
		cin>>a;
		float d=(180-a);
		float val1=(360/d);
		int val2=(360/d);
		//cout<<val1<<" "<<val2<<"\n";
		//printf("%0.20f %d\n",val1,val2);
		if(val1==val2)
			printf("YES\n");
		else
			printf("NO\n");

	}
}
