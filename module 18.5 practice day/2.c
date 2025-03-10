#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(n>0){
        for(i=n;i>=0;i--){
            printf("%d ",i);
        }
        for(i=1;i<=n;i++){
            printf("-%d ",i);
        }
    }
    else if(n<0){
        for(i=n;i<=0;i++){
            printf("%d ",i);
        }
        int mul=n*-1;
        for(i=1;i<=mul;i++){
            printf("%d ",i);
        }
    }
}

