#include <stdio.h>
#include <limits.h>

int divide(int dividend, int divisor) {
    // Overflow case
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    return dividend / divisor;
}

int main() {
    int dividend, divisor;
    scanf("%d %d", &dividend, &divisor);

    printf("%d", divide(dividend, divisor));

    return 0;
}
