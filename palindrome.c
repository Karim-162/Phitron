#include <stdio.h>
#include<string.h>

int main() {
    char s1[100],s2[100],i=0,len=0;
    scanf("%s",s1);
    while(s1[i]!='\0'){
        len++;
        i++;
    }
    printf("%d",len);
    for(int j=0,i=len-1;i>=0;i--,j++){
        s2[j]=s1[i];
    }
    int compare = strcmp(s1,s2);
    if(compare==0){
        printf("palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }
    return 0;
}
