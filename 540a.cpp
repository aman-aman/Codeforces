#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int val=0;
    for(int i=0;i<n;i++)
        val+=min(abs(a[i]-b[i]),abs(10-(abs(a[i]-b[i]))));
    cout<<val<<"\n";
}
