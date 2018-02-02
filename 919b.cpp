#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int s=0;
    while(n)
    {
        int val=n%10;
        s+=val;
        n=n/10;
    }
    return s;
}
int main()
{
    vector<int> r;
    r.push_back(19);
    int a=19;
    int val=10000;
    while(r.size()<=val)
    {
        if(sum(a+1)==10)
            r.push_back(a+1);
        a++;
    }
    //for(int i=0;i<r.size();i++)cout<<r[i]<<"\n";

    int k;
    cin>>k;
    cout<<r[k-1]<<"\n";
}
