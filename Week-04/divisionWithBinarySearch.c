#include <stdio.h>

int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y);

    if (y == 0) {
        printf("Division by zero");
        return 0;
    }

    int sign = 1;
    if ((x < 0) ^ (y < 0))
        sign = -1;

    if (x < 0) x = -x;
    if (y < 0) y = -y;

    long long low = 0, high = x, ans = 0;

    while (low <= high) {
        long long mid = low + (high - low) / 2;

        if (mid * y <= x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%lld", sign * ans);

    return 0;
}
