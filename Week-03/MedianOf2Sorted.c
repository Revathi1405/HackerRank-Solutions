#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,m;
    scanf("%d %d",&n,&m);
    int arr1[n],arr2[m],arr3[n+m];
    for(int i=0;i<n;i++){scanf("%d",&arr1[i]);}
    for(int i=0;i<m;i++){scanf("%d",&arr2[i]);}
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if(arr1[i]<=arr2[j]){arr3[k++]=arr1[i++];}
        else{arr3[k++]=arr2[j++];}
    }
    while(i<n){arr3[k++]=arr1[i++];}
    while(j<m){arr3[k++]=arr2[j++];}
    double median;
    if(k%2!=0){median=arr3[k/2];}
    else{median=(arr3[k/2]+arr3[(k/2)-1])/2.0;}
    printf("%.1f",median);
    return 0;
}
