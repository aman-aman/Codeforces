#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double res=0;
    res=res+sqrt(b*b-4*a*c);
    res=res-b;
    res=res/2;
    res=res/a;
    printf("%6f\n",res);
}
