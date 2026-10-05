#include <stdio.h>

int main() {
    long long n;
    int k;
    scanf("%lld %d",&n,&k);
    n = n^(1ll<<k);
    printf("%lld",n);
    return 0;
}
