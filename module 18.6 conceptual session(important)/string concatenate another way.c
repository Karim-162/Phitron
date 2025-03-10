#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[50];
    scanf("%s %s",s1,s2);
    int i=0,j=0;
    int len=0;
    while(s1[i]!='\0')
    {
        i++;
        len++;

    }
    //printf("%d",len);
    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }
    s1[len+j]='\0';

    printf("%s",s1);
}

