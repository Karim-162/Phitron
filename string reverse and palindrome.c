#include <stdio.h>

int main() {
    char s1[100],s2[100];
    fgets(s1,100,stdin);
    //printf("%s",s1);
    int i=0,len=0,j;
    while(s1[i]!='\0'){
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++){
        s2[j]=s1[i];
    }
    s2[j]='\0';
    int d=strcmp(s1,s2);
    if(d==1){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
    printf("%s",s2);

    return 0;
}
