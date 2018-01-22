#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a ,b,c;
void remove()
{
	ostringstream os1,os2,os3,os4;
	string s1,s2,s3;
	os1<<a;os2<<b;os3<<c;
	s1=os1.str();s2=os2.str();s3=os3.str();
    string t1,t2,t3;
    //sum string
    for(ll i=0;i<s1.length();i++)
	{
		if(s1[i]!='0')
		{
			t1.push_back(s1[i]);
		}
	}
	for(ll i=0;i<s2.length();i++)
	{
		if(s2[i]!='0')
		{
			t2.push_back(s2[i]);
		}
	}
    for(ll i=0;i<s3.length();i++)
	{
		if(s3[i]!='0')
		{
			t3.push_back(s3[i]);
		}
	}
	stringstream ss1(t1),ss2(t2),ss3(t3);
    ss1>>a;ss2>>b;ss3>>c;
}
int main()
{
	scanf("%lld%lld",&a,&b);
	c=a+b;
	remove();
	if(c==a+b)
		printf("YES\n");
	else
		printf("NO\n");

}
