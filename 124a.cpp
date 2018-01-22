#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll a,b,n;
	cin>>n>>a>>b;
	if(a+b>=n)
		cout<<(n-a)<<"\n";
	else
		cout<<b+1<<"\n";

}
