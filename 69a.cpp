#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++)
		cin>>x[i]>>y[i]>>z[i];

	int resx=0,resy=0,resz=0;
	 for(int i=0;i<n;i++)
	 {
	 	resx=resx+x[i];
		resy=resy+y[i];
		resz=resz+z[i];
	 }
	 if(resx==0&&resy==0&&resz==0)
		cout<<"YES\n";
	 else
		cout<<"NO\n";
}
