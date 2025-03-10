#include<stdio.h>
int main()
{
    int a[8]={5,4,5,7,2,1,4,2};
    int largest=a[0],i,j,count=0;
    for(i=0;i<8;i++){
        if(a[i]>a[0]){
            largest=a[i];
        }
    }
    //printf("%d",largest);
    int an[largest+1];
    for(i=0;i<=largest;i++){
        an[i]=0;
    }
    /*for(i=0;i<=largest;i++){
        printf("%d,%d ",i,an[i]);
    }*/
    for(i=0;i<8;i++){
        an[a[i]]+=1;
    }
    /*for(i=largest;i>0;i--){
        if(an[i]>0){
            count++;
        }
        if(count==3){
            printf("%d",i);
            break;
        }
    }*/
    for(i=0;i<=largest;i++){
        if(an[i]!=0){
            printf("index %d value %d\n\n",i,an[i]);
            }
    }
    //to check the sorted array
    for(i=0;i<=largest;i++){
        if(an[i]!=0){
            printf("%d ",i);
            }
    }
    printf("\n\n");
    //to check the sorted frequency array also with the duplicate value
    for(i=0;i<=largest;i++){
        if(an[i]!=0){
                for(j=1;j<=an[i];j++){
                    printf("%d ",i);
            }
                }

    }
    printf("\n\n");
    //to check which number is present how many times
    for(i=0;i<=largest;i++){
        if(i==5){
            printf("number %d is present %d times\n",i,an[i]);
            }
    }


}
