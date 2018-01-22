#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    priority_queue<int,vector<int> ,greater<int> >pq;
    for(int i=0;i<s.length();i++)
    {
    	if(s[i]>=48&&s[i]<=57)
			pq.push(s[i]-'0');
    }
    string res;
    while(!pq.empty())
	{
		char ch=pq.top()+'0';
		res=res+ch;
		res=res+'+';
		pq.pop();
		//cout<<ch<<"\n";
	}
	string ans=res.substr(0,res.length()-1);
	cout<<ans<<"\n";
}
