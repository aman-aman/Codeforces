#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length()-1;
    int i,index=n;
    for(i=0;i<n;i++)
	{
		if((s[i]-'0')%2==0)
		{
			index=i;
			if(s[n]>s[i])
				break;
		}
	}
	if(index==n)
		cout<<-1<<"\n";
	else
	{
        swap(s[s.length()-1],s[index]);
        cout<<s<<"\n";
	}
}
