#include<stdio.h>
int main()
{
    int n,i,j,t,reviewer,count=0,s=0;
    scanf("%d",&t);
    for(j=0;j<t;j++){
        scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&reviewer);
        if(reviewer==1||reviewer==3){
            count++;
        }
    }

    printf("%d\n",count);
    count=0;
    }

}
