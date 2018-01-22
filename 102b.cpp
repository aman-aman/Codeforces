#include<bits/stdc++.h>
using namespace std;
#define ll int64_t
ll getsum(string str1)
{

	ll temp = 0, count = 0;
    while (str1.length() > 1)
    {
         temp= 0;
        for (ll i = 0; i < str1.length(); i++)
            temp+= ( str1[ i ] - '0' ) ;

		stringstream ss;
		ss << temp;
		str1.clear();
		str1 = ss.str();
        count++;
    }

    return count;
}
int main()
{
string n;
cin>>n;
ll c=getsum(n);
cout<<c<<"\n";
}
