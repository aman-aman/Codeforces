#include<bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int n, x, y; cin>>n>>x>>y;
    set<double> s;
    int flag=0;
    for(int i=0; i<n; i++)
    {
        int a, b; cin>>a>>b;
        if(a==x) { flag=1; continue; }
        s.insert((double)(b-y)/(a-x));
    }
    cout<<s.size()+flag;
    return 0;
}
