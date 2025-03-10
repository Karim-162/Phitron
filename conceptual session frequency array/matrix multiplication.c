#include<stdio.h>
int main()
{
    int row=3,col=3,i,j,k;
    int mat1[row][col],mat2[row][col],ans[row][col];

    printf("give input of 1st matrix\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("give input of 2nd matrix\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            ans[i][j]=0;
            for(k=0; k<col; k++)
            {
                ans[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

    printf("final output\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",ans[i][j]);

        }
        printf("\n");
    }
}



