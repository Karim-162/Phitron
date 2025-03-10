 #include<stdio.h>
 void generate_prime(int n)
 {
     int i,count=0,num=2;
     while(count<n){
            int isprime=1;
        for(i=2;i*i<=num;i++){
            if(num%i==0){
                isprime=0;
                break;
            }
        }
        if(isprime){
            count++;
            printf("%d ",num);
        }
        num++;
     }
     printf("\n");
 }
 int main()
 {
     int n,t;
     scanf("%d",&t);
     while(t--){
        scanf("%d",&n);
        generate_prime(n);
     }

 }
