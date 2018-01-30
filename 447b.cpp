#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int w[26];
    for(int i=0;i<26;i++)
        cin>>w[i];

   vector<pair<int,char> >vec;
    map<char,int> mp;
    for(int i=0;i<26;i++)
        mp[(char)(i+'a')]=w[i];

    //for(int i=0;i<26;i++)vec.push_back(make_pair(w[i],(char)(i+'a')));auto comp=[&](pair<int,char> it1,pair<int,char> it2){ return it1.second<it2.second;};sort(vec.begin(),vec.end(),comp);for(auto c:vec)cout<<c.first<<" "<<c.second<<"\n";
    int sum=0,i=0;
    for(i=0;i<s.length();i++)
    {
        sum=sum+(i+1)*mp[s[i]];
        //cout<<i+1<<"*"<<mp[s[i]]<<"\n";
    }
    int val=(*max_element(w,w+26));
    //cout<<sum<<" "<<val<<"\n";
    i++;
    for(int j=0;j<k;j++)
    {
        sum+=(i++)*val;
    }
    cout<<sum<<"\n";
}
