#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>>n;
    while(n--)
	{
		string s;
		cin>>s;
		if((s[2]=='+'&&s[1]=='+')||(s[0]=='+'&&s[1]=='+'))
			x++;
		if((s[2]=='-'&&s[1]=='-')||(s[0]=='-'&&s[1]=='-'))
			x--;
		if((s[2]=='x'&&s[1]=='x')||(s[0]=='x'&&s[1]=='x'))
			x=x*x;
	}
	cout<<x<<"\n";
}
