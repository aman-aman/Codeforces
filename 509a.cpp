//aman kuamr jha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
        cout<<1<<"\n";
    else
    {
         int dp[n][n];
            for(int i=0;i<n;i++)
            {
                dp[0][i]=1;
                dp[i][0]=1;
            }
            for(int i=1;i<n;i++)
            {
                for(int j=1;j<n;j++)
                {
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                }
            }
            //for(int i=0;i<n;i++){for(int j=0;j<n;j++){cout<<dp[i][j]<<" ";}cout<<"\n";}
            cout<<dp[n-1][n-1]<<"\n";
    }
}
