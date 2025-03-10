#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int i,j,len1=strlen(s1),len2=strlen(s2);
    for(i=len1,j=0;j<len2;j++,i++){
        s1[i]=s2[j];
    }
    printf("%s",s1);
}
