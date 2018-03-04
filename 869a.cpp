#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    vector<int> x,y;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        x.push_back(a);
    }

    for(int i=0;i<n;i++)
    {
        cin>>a;
        y.push_back(a);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());

    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(binary_search(x.begin(),x.end(),x[i]^y[j])||(binary_search(y.begin(),y.end(),x[i]^y[j])))
                cnt++;
        }
    }
    //cout<<cnt<<"\n";

    printf("%s\n",cnt%2==0?"Karen":"Koyomi");

}
