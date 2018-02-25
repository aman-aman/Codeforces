#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int n, a, ma=0, cnt=0;
    scanf("%I64d", &n);
    for(int i=0; i<n; i++) {
        scanf("%I64d", &a);
        if(a>ma) ma=a;
        cnt+=a;
    }
    a=ceil((double)cnt/(n-1)), a=max(a, ma);
    printf("%I64d", a);
    return 0;
}
