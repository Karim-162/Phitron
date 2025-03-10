#include<stdio.h>

int is_prime(int n)
{
    int i,flag=1;
    if(n==2){
        return 1;
    }
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;

}
int main()
{
    int n,num=2,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            while(!is_prime(num)){
                num++;
            }
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }

}
