#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    qsort(arr, n, sizeof(int), compare);
    int found = 0;
    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int left = i + 1;
        int right = n - 1;
        while (left < right) {
            long long sum = (long long)arr[i] + arr[left] + arr[right];
            if (sum == x) {
                printf("%d %d %d\n", arr[i], arr[left], arr[right]);
                found = 1;
                left++;
                right--;
                while (left < right && arr[left] == arr[left - 1])
                    left++;
                while (left < right && arr[right] == arr[right + 1])
                    right--;
            } else if (sum < x) { left++;
            } else {
                right--;
            }
        }
    }
    if (!found)
        printf("No Triplet Found");
    return 0;
}
