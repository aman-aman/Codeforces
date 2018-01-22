
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
ll n;
    cin>>n;
    ostringstream os1;
	string s;
	os1<<n;
	s=os1.str();
	ll se=0,f=0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='7')
			se++;
		if(s[i]=='4')
			f++;
	}
	//cout<<f<<o<<"\n";
	if((f+se)==s.length()||n%4==0||(n%7==0)||(n%44==0)||(n%47==0)||(n%74==0)||n%77==0||n%444==0||n%447==0||n%474==0||n%477==0||n%744==0||n%747==0||n%774==0)
	{
        printf("YES\n");
	}
	else
		printf("NO\n");
}
