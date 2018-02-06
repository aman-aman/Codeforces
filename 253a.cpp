#include<bits/stdc++.h>
using namespace std;
int main()
{

  ifstream in ("input.txt");
  ofstream out ("output.txt");
  int n, m;
  for (in >> n >> m; n > 0 || m > 0; --n, --m)
    out << (n > 0 && m > 0 ? (n > m ? "BG" : "GB") : (n > 0 ? "B" : "G"));
  out << endl;
    /*
    int n,m;
    cin >> n >> m ;
    string s;
    int val=min(n,m);
    while(val--)
    {
        s+="BG";
    }
    if(n>m)
    {
        n=n-m;
        //cout<<val<<" "<<n<<"\n";
        while(n--)
            s+="B";
    }
    else
    {
        m=m-n;
        while(m--)
        {
            s+="G";
        }
    }
    cout<<s<<"\n";*/

}
