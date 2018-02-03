#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=0,h=n-1,p1=0,p2=0;
    if(n%2==1)
        p1=*min_element(a,a+n);
    while(l<h)
    {
        if(a[l]>a[h])
        {
            p1+=a[l];
            //cout<<"p1: "<<a[l]<<"\n";
            l++;
        }
        else
        {
            p1+=a[h];
            //cout<<"p1: "<<a[h]<<"\n";
            h--;
        }
        if(a[l]>a[h])
        {
            p2+=a[l];
            //cout<<"p2: "<<a[l]<<"\n";
            l++;
        }
        else
        {
            p2+=a[h];
            //cout<<"p2: "<<a[h]<<"\n";
            h--;
        }
    }
    cout<<p1<<" "<<p2<<"\n";
}

