//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin>>s;
    for(ll i=0;i<s.length();i++)
    {
        if(i==0)
        {
            if(s[i]=='0'||s[i]=='9')
                continue;
            else
                s[i]=min(s[i]-'0',9-(s[i]-'0'))+'0';
        }
        s[i]=min(s[i]-'0',9-(s[i]-'0'))+'0';
    }
    cout<<s<<"\n";
}
