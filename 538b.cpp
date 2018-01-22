#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    vector<int> res;
    while(N)
    {
        int n=N,p=1,m=0;
        while(n)
        {
            if(n%10)
           {
               m+=p;
               //cout<<m<<" "<<n%10<<"\n";
           }
            n=n/10;
            p=p*10;
        }
        //cout<<m<<"\n";
        res.push_back(m);
        N=N-m;
    }
    cout<<res.size()<<"\n";
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<"\n";
}
