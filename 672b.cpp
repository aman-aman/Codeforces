#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    string s;
    cin>>s;
    set<char> st;
    for(char ch:s)
        st.insert(ch);


    printf("%d\n",n>26?-1:s.length()-st.size());
}
