#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;
    vector<int> cnt(26,0);
    for(int i=0;i<s.length();i++)
		cnt[s[i]-'a']++;

	int flag=1,i;
	string res;
	for(i=0;i<26;i++)
	{
		if(cnt[i]%k!=0)
			{
				//flag=-1;
				break;
			}
		else
		{
			//char ch=i+'a';
				res=res.append(cnt[i]/k,i+'a');
		}
	}
	if(i==26)
	{
			while (k--)
			{
				cout <<res;
			}
        cout << endl;
	}
	else
	{
		cout<<-1<<"\n";
	}

}
