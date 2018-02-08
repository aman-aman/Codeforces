#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> it1,pair<int,int> it2)
{
    return ((it1.second>it2.second)||((it1.second==it2.second)&&(it1.first>it2.first)));
}
int main()
{
    int n;
    cin>>n;
    int val1,val2;
    vector<pair<int,int> >a;
    for(int i=0;i<n;i++)
    {
        cin>>val1>>val2;
        a.push_back(make_pair(val1,val2));
    }
    sort(a.begin(),a.end(),comp);
    //for(int i=0;i<a.size();i++)cout<<a[i].first<<" "<<a[i].second<<"\n";
    int i=0,t=1,s=0;
    while(t>0&&i<n)
    {
        s+=a[i].first;
        t--;
        t+=a[i].second;
        i++;
    }
    cout<<s<<"\n";
}
