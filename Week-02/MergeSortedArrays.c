#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,m;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){scanf("%d",&arr1[i]);}
    scanf("%d",&m);
    int arr2[m];
    for(int i=0;i<m;i++){scanf("%d",&arr2[i]);}
    int res[n+m];
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(arr1[i]<arr2[j]){res[k++]=arr1[i++];}
        else{res[k++]=arr2[j++];}
    }
    while(i<n){res[k++]=arr1[i++];}
    while(j<m){res[k++]=arr2[j++];}
    for(int l=0;l<m+n;l++){
        printf("%d ",res[l]);
    }
    return 0;
}
