// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n=5,i,largest,count=0,duplicate=0,unique=0;
    int oara[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&oara[i]);
    }
    largest=oara[0];
    for(i=0; i<n; i++)
    {
        if(oara[i]>largest)
        {
            largest=oara[i];
        }
    }
    //printf("%d",largest);
    int nara[largest+1];
    for(i=0; i<largest; i++)
    {
        nara[i]=0;
    }
    for(i=0; i<n; i++)
    {
        nara[oara[i]]+=1;
    }
    for(i=largest; i>0; i--)
    {
        if(nara[i]==1)
        {
            unique++;
        }
        if(nara[i]>1)
        {
            duplicate++;
        }

    }
    printf("%d\n",duplicate);
printf("%d\n",unique);


    return 0;
}

