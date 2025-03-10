#include<stdio.h>

int las_fast(int num);
int main()
{
    int n,i,num,total=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&num);

        total+=las_fast(num);


    }
    printf("%d",total);

}
int las_fast(int num)
{
    int last_digi;
    int first_digi;
    last_digi=num%10;
    first_digi=num;
    while(first_digi>=10)
    {
        first_digi/=10;
    }
    return first_digi+last_digi;
}
