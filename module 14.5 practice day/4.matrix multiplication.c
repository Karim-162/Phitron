#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],result[100][100];
    int i,j,k,r1,r2,c1,c2,sum=0;
    scanf("%d%d",&r1,&c1);

    scanf("%d%d",&r2,&c2);

    while(c1!=r2)
    {
        scanf("%d %d",&r1,&c1);

        scanf("%d %d",&r2,&c2);
    }
    printf("enter matrix a\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter matrix b\n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //multiplication part.....
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("result matrix\n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
