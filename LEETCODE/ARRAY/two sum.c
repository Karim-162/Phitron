#include<stdio.h>
int main()
{
    int a[100],target,i;
    int nums;
    scanf("%d",&nums);
    for(i=0;i<nums;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&target);


    for(i=0;i<nums-1;i++){
        if(a[i]+a[i+1]==target){
            printf("[%d %d]",i,i+1);
            break;
        }
    }
}
