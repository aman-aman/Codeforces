#include<bits/stdc++.h>
using namespace std;
#define l long
int main()
{
    l n;
    scanf("%ld",&n);
    vector<l> res;
    if(n%2==0)
    {
        for(l i=0;i<n/2;i++)
            res.push_back(2);
    }
    else
    {
        for(l i=0;i<n/2-1;i++)
            res.push_back(2);

        res.push_back(3);
    }
    printf("%ld\n",res.size());
    for(auto x:res)
        printf("%ld ",x);
    printf("\n");
}
