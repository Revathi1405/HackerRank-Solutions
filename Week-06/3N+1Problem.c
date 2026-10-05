#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,max=0,t,n,p=0;
    scanf("%d %d",&i,&j);
    if(i>j){t=i;i=j;j=t;p=1;}
    for(int k=i;k<j;k++){
        t=k;
        int c=1;
        while(t!=1){
            if(t%2==0){t/=2;}
            else{t=(3*t)+1;}
            c++;
        }
        if(max<c){max=c;n=k;}
    }
    while(p){t=i;i=j;j=t;}
    printf("%d %d %d",i,j,max);   
    return 0;
}
