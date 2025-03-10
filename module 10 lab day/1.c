#include<stdio.h>
int main()
{
    int i,n,j,a,count,solved=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        count=0;//koijon solve korte parbe
        for(j=0; j<3; j++)
        {
            scanf("%d",&a);
            count+=a;
        }
        if(count>=2)
        {
            solved++;
        }

    }
    printf("%d",solved);

}
