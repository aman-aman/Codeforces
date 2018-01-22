#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float a,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
	{
		cin>>a;
		s=s+a;
	}
	float avg=s/n;
	printf("%0.12f\n",avg);
}
