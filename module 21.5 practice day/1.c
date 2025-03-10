#include<stdio.h>
void seq(n);
int main()
{
    int n;
    scanf("%d",&n);
    seq(n);
    //printf("%d ",sequence);
}
void seq(n)
{
    int i;
    if(n>0){
        for(i=n;i>=0;i--){
            printf("%d ",i);
        }
        for(i=1;i<=n;i++){
            printf("%d ",-i);
        }
    }
    else{
        for(i=n;i<=0;i++){
            printf("%d ",i);
        }
        n=n*(-1);
        for(i=1;i<=n;i++){
            printf("%d ",i);
        }
    }
}
