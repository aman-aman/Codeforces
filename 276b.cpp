#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int> cnt(26,0);
	for(int i=0;i<s.length();i++)
		cnt[s[i]-'a']++;
	int o=0;
	for(int i=0;i<26;i++)
	{
		if(cnt[i]%2==1&&cnt[i]!=0)
			o++;
	}
	if(o<=1)
		printf("First\n");
	else
		printf("Second\n");
}
