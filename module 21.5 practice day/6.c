#include<stdio.h>

void divisors(int num);
int main()
{
    int n,i;
    scanf("%d",&n);

    divisors(n);
    //printf("%d",total);

}
void divisors(int num)
{
    for(int i=1; i<=num; i++)
    {
        if(num%i==0){
            printf("%d ",i);
        }


    }
}
