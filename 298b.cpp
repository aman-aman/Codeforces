#include<bits/stdc++.h>
using namespace std;
#define ll long long
double dis(ll x1,ll y1,ll x2,ll y2)
{
	ll dx=(x1-x2),dy=(y1-y2);
	ll t=dx*dx+dy*dy;
	double val=sqrt(t);
	return val;
}
int main()
{
	ll t,sx,sy,ex,ey;
	scanf("%lld%lld%lld%lld%lld",&t,&sx,&sy,&ex,&ey);
	string s;
	cin>>s;
	ll i=0,time=0;
	while(i<t)
	{
		if(sx==ex&&sy==ey)
			break;
		if((s[i]=='E')&&(dis(sx+1,sy,ex,ey)<dis(sx,sy,ex,ey)))
			{
				//cout<<s[i]<<" "<<sx<<" "<<sy<<"\n";
				sx++;
			}
		if((s[i]=='W')&&(dis(sx-1,sy,ex,ey)<dis(sx,sy,ex,ey)))
			{
				//cout<<s[i]<<" "<<sx<<" "<<sy<<"\n";
				sx--;
			}
		if((s[i]=='N')&&(dis(sx,sy+1,ex,ey)<dis(sx,sy,ex,ey)))
			{
				//cout<<s[i]<<" "<<sx<<" "<<sy<<"\n";
				sy++;
			}
		if((s[i]=='S')&&(dis(sx,sy-1,ex,ey)<dis(sx,sy,ex,ey)))
			{
				//cout<<s[i]<<" "<<sx<<" "<<sy<<"\n";
				sy--;
			}
		time++;
		i++;
	}
	if(sx==ex&&sy==ey)
		printf("%lld\n",time);
	else
		printf("-1\n");
}
