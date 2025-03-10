#include<stdio.h>
int main()
{
    int ara[100],i,n,j,temp;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(ara[i]>ara[i+1])
            {
                temp=ara[i];
                ara[i]=ara[i+1];
                ara[i+1]=temp;
            }
        }
        for(i=0; i<n; i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }

}
