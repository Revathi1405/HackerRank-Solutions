#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxsum=arr[0],sum=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){sum+=arr[i];}
        else{sum=arr[i];}
        if(maxsum<sum){maxsum=sum;}
    }
    printf("%d",maxsum);
    return 0;
}
