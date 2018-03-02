#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>mat[i][j];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]=='C')
                cnt++;
        }
        int val=cnt*(cnt-1);
        val=val/2;
        sum+=val;
    }

    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(mat[j][i]=='C')
                cnt++;
        }
        int val=cnt*(cnt-1);
        val=val/2;
        sum+=val;
    }
    cout<<sum<<"\n";
}
