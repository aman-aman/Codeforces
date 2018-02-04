#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        if(s[i]>='a'&&s[i]<='z')
            mp[s[i]]++;
        else if(s[i]>='A'&&s[i]<='Z'&&mp[tolower(s[i])]>0)
            mp[tolower(s[i])]--;
        else
            cnt++;

    }
    cout<<cnt<<"\n";
}
