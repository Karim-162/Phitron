#include<stdio.h>
void ulta_pattern(int n);
int main()
{
    int n;
    scanf("%d",&n);
    ulta_pattern(n);
}
void ulta_pattern(int n)
{
        int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=((i*2)-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=n; i>=1; i--)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=((i*2)-1); j++)
        {
            printf("*");
        }


        printf("\n");
    }
}
