#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int i=0,j=0;
    while(i<s.length()&&j<t.length())
    {
        if(s[i]==t[j])
            i++;
        j++;
    }
    printf("%d\n",i+1);
}
