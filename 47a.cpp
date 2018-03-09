#include<bits/stdc++.h>
using namespace std;
vector<int> vec(510);
void gener()
{
    for(int i=0;i<=501;i++)
    {
        int val=i*(i+1);
        val=val/2;
        vec.push_back(val);
    }
}
int main()
{
    gener();
    int n;
    cin>>n;
    if(binary_search(vec.begin(),vec.end(),n))
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
