// Online C compiler to run C program online
#include <stdio.h>
void find_max_min(int n,int a[]){
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d\n",max);
    printf("%d",min);
}
int main() {
    int a[]={5,2,4,10};
    int n=sizeof(a)/sizeof(int);
    find_max_min(n,a);

    return 0;
}
