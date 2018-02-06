#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p,q,val;
    set<int> st;
    cin>>p;
    while(p--)
    {
        cin>>val;
        st.insert(val);
    }
    cin>>q;
    while(q--)
    {
        cin>>val;
        st.insert(val);
    }
    if(st.size()==n)
        cout<<"I become the guy.\n";
    else
        cout<<"Oh, my keyboard!\n";
}
