#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int temp=-1;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            temp=i;
            break;
        }
    }
    string str;
    if(temp==-1)
        str=s.substr(1,s.length()-1);
    else
    {
        for(int i=0;i<s.length();i++)
        {
            if(temp!=i)
                str+=s[i];
        }
    }
    cout<<str<<"\n";
}
