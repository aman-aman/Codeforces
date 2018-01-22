#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,m;
    cin>>n;
    int boys[n];
    for(int i=0;i<n;i++)
        scanf("%d",&boys[i]);

    cin>>m;
    int girls[m];
    for(int i=0;i<m;i++)
        scanf("%d",&girls[i]);

    sort(boys,boys+n);
    sort(girls,girls+m);
    vector<int> gp(n,-1),bp(n,-1);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(boys[i]-girls[j])<=1)
            {
                cnt++;
                girls[j]=INT_MAX;
                break;
            }
        }
    }
    cout<<cnt<<"\n";


}
