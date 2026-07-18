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
    int a=0,c=0;
    for(int i=0;i<n;i++){
        if(c==0){
            c=1;
            a=arr[i];
        }
        else if(arr[i]==a){c++;}
        else{c--;}
    } c=0;
    for(int i=0;i<n;i++){  if(arr[i]==a){c++;} }
    if(c > n/2){
        printf("%d",a);
    }else{printf("-1");}
    return 0;
}
