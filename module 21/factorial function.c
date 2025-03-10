#include<stdio.h>
#include<math.h>

int fact(int n);
int main()
{
    int n;
    scanf("%d",&n);
    int factorial = fact(n);
    printf("%d",factorial);
    return 0;
}
int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
