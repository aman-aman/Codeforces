#include <bits/stdc++.h>
using namespace std;
int n, s[500005] = {0}, ans = 0, l, r;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &s[i]);
    sort(s +1,s+n+1,greater<int>());
    l = 1, r = (n + 1) / 2 + 1;
    ans = n;
    while (r <= n)
    {
        while (r <= n && s[r] * 2 > s[l]) r++;
        if (r <= n) ans--, l++, r++;
    }
    printf("%d\n", ans);
    return 0;
}
