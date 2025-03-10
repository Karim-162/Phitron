#include<stdio.h>
int main()
{
    int n,i,count=0,new,div;
    scanf("%d",&n);
    while(n!=0){

        new=n%10;
        count+=new;
        n=n/10;
    }
    printf("%d",count);
}
