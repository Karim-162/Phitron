#include<stdio.h>

int is_prime(int x)
{
    int i;
    if(x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }
    for(i=2;i<x;i++){
        if(x%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a,i,ans;
    scanf("%d",&a);
    ans=is_prime(a);
    if(ans==1)
    {
        printf("%d is a prime number",a);
    }
    else
    {
        printf("%d is not a prime number",a);

    }

}
