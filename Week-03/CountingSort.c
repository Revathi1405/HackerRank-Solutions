#include<stdio.h>
int main(){
    int n,max;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){max=arr[i];}
    }
    int count[100];
    for(int i=0;i<100;i++){count[i]=0;}
    for(int i=0;i<n;i++){count[arr[i]]++;}
    for(int i=0;i<100;i++){
        printf("%d ",count[i]);
    }
    return 0;
}
