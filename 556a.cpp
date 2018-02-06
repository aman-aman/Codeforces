#include<bits/stdc++.h>
using namespace std;
bool match(char a,char b)
{
    if((a=='0'&&b=='1')||(a=='1'&&b=='0'))
        return true;
    return false;
}
int main()
{
    int n;
    scanf("%d",&n);
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(st.empty()||!match(st.top(),s[i]))
        {
            st.push(s[i]);
        }
        if(match(st.top(),s[i]))
        {
            st.pop();
        }
    }
    /*while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }*/
    printf("%d\n",st.size());
}
