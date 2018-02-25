#include<bits/stdc++.h>
using namespace std;
bool comp(pair<string,pair<int,int> > it1,pair<string,pair<int,int> >  it2)
{
    //return (it1.second.first>it2.second.first||it1.second.first==it2.second.first&&it1.second.second>it2.second.second);
    return it1.second.second>it2.second.second;
}
int main()
{
    //vector<string,pair<int,int> >que;
    map<string,pair<int,int> > mp;

    int n,t=0;
    string s;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        cin>>s;
        t++;
        int cnt=mp[s].first;
        mp[s]=make_pair(cnt+1,t);
    }
    vector<pair<string,pair<int,int> > >vec;
    for(auto x:mp)
        vec.push_back(make_pair(x.first,make_pair(x.second.first,x.second.second)));

    //for(int i=0;i<vec.size();i++)cout<<vec[i].first<<" "<<vec[i].second.first<<" "<<vec[i].second.second<<"\n";

    sort(vec.begin(),vec.end(),comp);
    for(int i=0;i<vec.size();i++)
        cout<<vec[i].first<<"\n";
}

