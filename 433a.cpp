#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,w1=0,w2=0,tot,a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
		scanf("%d",&a);
		if(a==100)
		{
			w1++;
		}
        else
        {
			w2++;
		}
	}
	tot=w1+w2*2;
	if(tot&1){
		printf("NO");
		return 0;
	}
	tot/=2;
	int tmp=min(tot/2,w2);
	tot-=tmp*2;
	if(tot<=w1){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}
