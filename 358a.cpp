#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,x3,x4;
	cin>>x1>>x2>>x3>>x4;
    if((x1<x3&&x3<x2&&x2<x4)||(x3<x1&&x1<x4&&x4<x2))
		cout<<"no\n";
	else
		cout<<"yes\n";
}
