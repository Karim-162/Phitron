#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    gets(s);
    int len,i,j,count=0;
    char temp;
    len=strlen(s);
    for(i=0;i<len;i++){
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
        }
    }
    //printf("%s",s);
    for(i=0;i<len-1;i++){
        for(j=0;j<len-i-1;j++){

                if(s[j]>s[j+1]){
                    temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
        }
    }
    for(j=0;j<len;j++){
        if(s[j]!=s[j+1]){
            count++;
        }
    }
    //printf("%d",count);
    if(count%2==0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    //puts(s);
    //printf("%s",s);
}

