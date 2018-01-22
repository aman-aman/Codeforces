#include<bits/stdc++.h>
using namespace std;
vector<int> dp(16,0);
void cal()
{
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=15;i++)
        dp[i]=i*dp[i-1];
    //for(int i=0;i<=15;i++)cout<<dp[i]<<" ";
}
int main()
{
    cal();
    int n;
    scanf("%d",&n);
    string s;
    cin>>s;
    int res=1;
    for(int i=0;i<s.length();i++)
    {
        res=res*dp[s[i]-'0'];
    }
    printf("%d\n",res);

}
