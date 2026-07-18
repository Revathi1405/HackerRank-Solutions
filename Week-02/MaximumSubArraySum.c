#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);        
    }
    int sum=a[0],end=0;
    for(int i=0;i<n;i++){
        end+=a[i];
        if(sum<end){sum=end;}
        if(end<0){end=0;}
    }
    printf("%d",sum);
    return 0;
}
