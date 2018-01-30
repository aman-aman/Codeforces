#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    map<char,int> mp;
    string s,t;
    cin>>t;

    for(char ch:t)
        s.push_back(tolower(ch));

    int flag=1;
    if(s.length()<26)
        flag=0;
    else
    {
        set<char> rst;
        for(char ch:s)
            rst.insert(ch);
        if(rst.size()!=26)
            flag=0;
    }
    if(flag==0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}
