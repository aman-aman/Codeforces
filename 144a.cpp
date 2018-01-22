#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main() {
    int n, a[105], ma=INT_MIN, mi=INT_MAX, ima, imi, ans;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i]>ma) ma=a[i], ima=i;
        if(a[i]<=mi) mi=a[i], imi=i;
    }
    ans=ima+(n-1-imi);
    if(imi<ima) ans--;
    printf("%d", ans);
    return 0;
}
