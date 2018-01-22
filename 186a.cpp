#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
		string s1,s2;
		cin>>s1>>s2;
		int flag=-1;
		if(s1.length()!=s2.length())
		{
			printf("NO\n");
			return 0;
		}
		string d1="",d2="";
		int c=0;
		for(int i=0;i<s1.length();i++)
		{
			if(s1[i]!=s2[i])
				{
					d1=d1+s1[i];
					d2=d2+s2[i];
				}
		}
		if(d1.length()==2)
		{
			if(d1[0]==d2[1]&&d2[0]==d1[1])
				{
					printf("YES\n");
					return 0;
				}
		}
		printf("NO\n");
		return 0;
}
