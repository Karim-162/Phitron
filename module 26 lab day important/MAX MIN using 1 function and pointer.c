// Online C compiler to run C program online
#include <stdio.h>
void find_max_min(int n,int a[],int* p,int* q){
    *p=a[0];
    *q=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>*p){
            *p=a[i];
        }
        if(a[i]<*q){
            *q=a[i];
        }
    }

}
int main() {
    int a[]={5,2,4,10};
    int n=sizeof(a)/sizeof(int);
    int max,min;
    find_max_min(n,a,&max,&min);
    printf("%d\n",max);
    printf("%d",min);

    return 0;
}
