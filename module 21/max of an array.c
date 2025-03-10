#include <stdio.h>
int arraymax(int x[]){
    int i,len=0;
    while(x[i]!='\0'){
        len++;
        i++;
    }
    int max=x[0];
    for(i=0;i<len-1;i++){
        if(x[i]>max){
            max=x[i];
        }
    }
    return max;
}

int main() {
    int a[]={1,2,15,4};
    int max=arraymax(a);
    printf("%d",max);

    return 0;
}
