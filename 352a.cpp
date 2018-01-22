#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,f=0,z=0,a;
    scanf("%lld",&n);
    for(ll i=0;i<n;i++)
		{
			scanf("%lld",&a);
			if(a==5)
				f++;
			else
				z++;
		}
		if(f<9&&z>0)
			printf("0\n");
		else if(f>0&&z==0)
			printf("-1\n");
		else
		{
			if(f%9==0)
			{
				while(f--)
					printf("5");
				while(z--)
					printf("0");
			}
			else
			{
				while(f%9!=0)
					f--;
				while(f--)
					printf("5");
				while(z--)
					printf("0");
			}
		}
		printf("\n");
}
