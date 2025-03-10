#include<stdio.h>

void even(int num);
int main()
{
    int n,i;
    scanf("%d",&n);

    even(n);
    //printf("%d",total);

}
void even(int num)
{
    for(int i=1; i<=num; i++)
    {
        if(i%2==0){
            printf("%d ",i);
        }


    }
}
