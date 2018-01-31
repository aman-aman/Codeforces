#include<bits/stdc++.h>
using namespace std;
char a[1001][1001];
int main()
{
    int n;
    cin>>n;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                if(j%2==0)
                    {
                        a[i][j]='C';
                        sum++;
                    }
                else
                    a[i][j]='.';
            }
        }
        else
        {
            for(int j=0;j<n;j++)
            {
                if(j%2==0)
                    a[i][j]='.';
                else
                    {
                        a[i][j]='C';
                        sum++;
                    }
            }
        }
    }
    printf("%d\n",sum);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j];
        cout<<"\n";
    }
}
