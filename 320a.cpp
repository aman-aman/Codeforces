#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool magical(string s)
{
	if(s[0]!='1')
		return false;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!='1'&&s[i]!='4')
			return false;
	}
	if(s.find("444")!=string::npos)
		return false;
	return true;
}
int main()
{
    ll n;
    string s;
    cin>>s;
	if(magical(s))
		printf("YES\n");
	else
		printf("NO\n");

}
