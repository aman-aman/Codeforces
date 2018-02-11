#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int> cnt(26,0);
	for(int i=0;i<s.length();i++)
		cnt[s[i]-'a']++;
	int flag=1,odd=0;
	for(int i=0;i<26;i++)
	{
		if(cnt[i]%2==1&&cnt[i]!=0)
		{
            odd++;
		}
	}
	if(odd<=1)
		printf("First\n");
	else
	{
		if(odd%2==0)
			printf("Second\n");
		else
			printf("First\n");
	}

}
