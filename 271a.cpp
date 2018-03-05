#include<bits/stdc++.h>
using namespace std;
bool alldist(int n)
{
    int a=n%10;
    n=n/10;
    int b=n%10;
    n=n/10;
    int c=n%10;
    n=n/10;
    int d=n%10;
    //cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
    if(a==b||b==c||c==d||d==a||c==a||b==d)
        return false;
    return true;
}
int main()
{
    int n;
    cin>>n;
    n++;
    while(!alldist(n))
    {
        n++;
    }
    cout<<n<<"\n";
}
