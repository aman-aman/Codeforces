//aman kumar jha
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    sort(a,a+n);
    int c=0;
    vector<int> used(n,0);
    for(int i=0;i<n;i++)
    {
        used[i]=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j]&&!used[j])
            {
                used[j]=1;
                c++;
                break;
            }
        }
    }
    printf("%d\n",c);
}
