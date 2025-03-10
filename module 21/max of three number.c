#include<stdio.h>

int max_of_3(int x,int y,int z)
{
    if(x>y&&x>z)
    {
        return x;
    }
    else if(y>x&&y>z)
    {
        return y;
    }
    else
    {
        return z;
    }
}
int main()
{
    int a,b,c,max,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        max=max_of_3(a,b,c);
        printf("maximum among 3 is %d",max);
    }

}
