#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(c>=a)
        {
            if(b>=c)
            {
                printf("%d",c);
            }
            else
                printf("%d",a+c);
        }
        else{
            if(d>=a){
                printf("%d",a);
            }
            else{
                printf("%d",a+c);
            }
        }
        printf("\n");
    }


}
