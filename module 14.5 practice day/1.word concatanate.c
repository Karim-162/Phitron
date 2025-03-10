#include<stdio.h>
int main()
{
    char word[1000],result[1000];
    int i,j,n,pos=0;
    scanf("%d",&n);
    result[0]='\0';
    for(i=0;i<n;i++){
        scanf("%s",word);
        if(i>0){
            result[pos]=' ';
            pos++;
        }
        for(j=0;word[j]!='\0';j++){
            result[pos]=word[j];
            pos++;
        }
    }
    result[pos]='\0';
    printf("%s",result);
    return 0;
}
