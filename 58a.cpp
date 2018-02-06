#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
        while(i<s.length()&&s[i]!='h')
            i++;
        i++;
        while(i<s.length()&&s[i]!='e')
            i++;
        i++;
        while(i<s.length()&&s[i]!='l')
            i++;
        i++;
        while(i<s.length()&&s[i]!='l')
            i++;
        i++;
        while(i<s.length()&&s[i]!='o')
            i++;


    if(i<s.length())
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
