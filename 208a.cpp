#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string pat="WUB";
	int i=0;
    while(s.find(pat)!=string::npos)
	{
		i=s.find(pat);
		s.replace(i,3," ");
	}
	cout<<s<<"\n";
}
