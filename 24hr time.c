#include<Stdio.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);

    if(n<0||n>24||m<0||m>24)
    {
        printf("invalid input");
        return 1;
    }
    if(n<=m)
    {
        for(i=n; i<=m; i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=n; i<=24; i++)
        {
            printf("%d ",i);
        }
        for(i=0; i<=m; i++)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
