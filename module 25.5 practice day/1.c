#include<stdio.h>

void count_less_and_greater(int n,int k,int a[],int *less,int *greater)
{
    *less=0;
    *greater=0;
    for(int i=0;i<n;i++){
        if(a[i]>k){
            (*greater)++;
        }
        else if(a[i]<k){
            (*less)++;
        }
    }
}
int main()
{
    int less,greater,i,j,n,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    count_less_and_greater(n,k,a,&less,&greater);

    printf("%d %d",less,greater);
}
