#include<stdio.h>
#include<string.h>
int main()
{
    int row=3,col=3,i,j,count=0;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
                if(i==j||i+j==2){
                    printf("%d %",j);
                }
                else{
                    printf("%d ",count);
                }

        }
        printf("\n");
    }
}
