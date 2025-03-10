// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int ara[100],i,j,n,min,sara[100],m_ind;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    int k;
    scanf("%d",&k);

    for(j=0; j<n; j++)
    {
        min = ara[0];
        m_ind=0;
        for(i=0; i<n; i++)
        {
            if(ara[i]<min)
            {
                min=ara[i];
                m_ind=i;
            }
        }
        sara[j]=min;
        ara[m_ind]=9999;
        for(i=0; i<n; i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }
    for(j=0; j<n; j++)
    {
        printf("%d ",sara[j]);
    }
    printf("\n");
    for(j=0;j<n;j++){
        if(j==k){
            printf("%d",sara[j-1]);
            break;
        }

    }

    return 0;
}
