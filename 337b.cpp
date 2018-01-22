#include<bits/stdc++.h>
using namespace std;
int gcd (int a, int b){return (b == 0) ? a : gcd (b, a%b);}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(a*d<=b*c)
	{
        int nr=b*c-a*d;
        int dr=b*c;
        int t1=gcd(nr,dr);
        nr=nr/t1;
        dr=dr/t1;
        printf("%d/%d\n",nr,dr);
	}
	else if(a*d>b*c)
	{
		int nr=a*d-b*c;
		int dr=a*d;
		int t1=gcd(nr,dr);
        nr=nr/t1;
        dr=dr/t1;
		printf("%d/%d\n",nr,dr);
	}
}
