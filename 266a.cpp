#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    scanf("%d",&n);
    string s;
    cin>>s;
    s.erase(unique(s.begin(),s.end()),s.end());
    //cout<<s.length()<<"\n";
	printf("%d\n",n-s.length());
}
