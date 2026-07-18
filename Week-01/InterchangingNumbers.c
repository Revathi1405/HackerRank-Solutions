#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l=0,s=0;
    for(int i=1;i<n;i++){
        if(a[l]<a[i]){ l=i; }
        if(a[s]>a[i]){ s=i; }
    }
    int temp = a[l];
    a[l] = a[s];
    a[s] = temp;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
