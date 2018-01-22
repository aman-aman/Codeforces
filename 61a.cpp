#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2,res;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++)
		res.push_back(((s1[i]-'0')^(s2[i]-'0'))+'0');

    for(int i=0;i<res.length();i++)
		cout<<res[i];
}
