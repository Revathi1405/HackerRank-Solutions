#include <stdio.h>

int add(int x, int y) {
    if (y == 0) {
        return x;
    }
    int carry = (x & y) << 1;
    return add(x ^ y, carry);
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d", add(x, y));
    return 0;
}
