#include<bits/stdc++.h>
using namespace std;
bool match(char a,char b)
{
    return a==b;
}
int main()
{
    string s;
    stack<char> st;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(st.empty()||!match(st.top(),s[i]))
            st.push(s[i]);
        else
        {
            if(match(st.top(),s[i]))
                st.pop();
        }
    }
    if(st.empty())
        cout<<"Yes\n";
    else
        cout<<"No\n";
}
