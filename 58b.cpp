#include<bits/stdc++.h>
using namespace std;
void getfact(int n)
{
    vector<int> res;
    for(int i=n;i>=1;i--)
    {
        if(n%i==0)
        {
            n=i;
            res.push_back(i);
        }
    }
    sort(res.begin(),res.end(),greater<int>());
    for(auto x:res)
        cout<<x<<" ";
    cout<<"\n";
}
int main()
{
    int n;
    cin>>n;
    getfact(n);
}
