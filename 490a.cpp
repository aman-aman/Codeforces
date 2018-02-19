#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    vector<int> one,two,three;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        mp[a[i]]++;
        if(a[i]==1)
            one.push_back(i+1);
        else if(a[i]==2)
            two.push_back(i+1);
        else
            three.push_back(i+1);
    }
    if(one.size()==0||two.size()==0||three.size()==0)
        printf("%d\n",0);
    else
    {
        int team=INT_MAX;
        for(int i=0;i<n;i++)
            team=min(team,mp[a[i]]);
        while(one.size()>team)
            one.pop_back();
        while(two.size()>team)
            two.pop_back();
        while(three.size()>team)
            three.pop_back();
        //cout<<one.size()<<" "<<two.size()<<" "<<three.size()<<"\n";
        printf("%d\n",team);
        for(int i=0;i<team;i++)
            printf("%d %d %d\n",one[i],two[i],three[i]);
    }
}
