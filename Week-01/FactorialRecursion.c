#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fac(int n){
    if(n==1||n==0){ return 1;}
    else return n*fac(n-1);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    scanf("%d",&n);
    printf("%d",fac(n)); 
    return 0;
}
