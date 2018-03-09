#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n);
    set<int> st(a,a+n);
    vector<int> vec(st.begin(),st.end());
    bool ans=false;
    if(vec.size()<3)
        ans=false;
    else
    {
        for(int i=0;i<n-2;i++)
        {
            if(vec[i+1]-vec[i]==1&&vec[i+2]-vec[i+1]==1)
            {
                ans=true;
                break;
            }
        }
        //for(auto c:st)cout<<c<<" ";cout<<"\n";
    }
    if(ans)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
