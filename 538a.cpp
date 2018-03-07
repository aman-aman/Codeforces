#include<bits/stdc++.h>
using namespace std;


int main() {
	string s;
	cin >> s;
	string req = "CODEFORCES";
	bool ans = (s == req);
	for(int i=0; i<s.length(); i++)
		for(int j=i; j<s.length(); j++) {
			string temp = "";
			for(int k=0; k<i; k++) temp += s[k];
			for(int k=j+1; k<s.length(); k++) temp += s[k];
			if(temp == req) ans = true;
		}
	if(ans) cout << "YES";
	else cout << "NO";
	cout << endl;
}
