#include<stdio.h>
#include<math.h>

int fact(int n);
int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int permutation_nPr = fact(n)/fact(n-r);
    int combination_nCr = fact(n)/(fact(n-r)*fact(r));
    printf("nPr is %d\n",permutation_nPr);
    printf("nCr is %d",combination_nCr);
    return 0;
}
int fact(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++)
    {
        fact*=i;
    }
    return fact;
}
