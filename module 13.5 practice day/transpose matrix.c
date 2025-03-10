#include<stdio.h>
int main()
{
    int a[100][100],i,j,r=3,c=3;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

}
