#include<stdio.h>
int main()
{
    int a[100][100],n,i,j,k;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0; k<n; k++)
    {
        printf("row-%d and column-%d = ", k + 1, k + 1);

        for(j=0; j<n; j++)
        {
            if(k!=j)
            {
                printf("%d ",a[k][j]);
            }
        }
        for(i=0; i<n; i++)
        {
            if(k!=i)
            {
                printf("%d ",a[i][k]);
            }
        }
        printf("\n");
    }
}
