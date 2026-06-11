#include<stdio.h>
int main(){
    int a,Isprime=1;
    printf("enter a number :");
    scanf("%d",&a);
    if(a==0||a==1){
        Isprime=0;
    }
    for(int i=2;i<=a/2;i++){
        if(a%i==0){
            Isprime=0;
            break;
        }
    }
    if(Isprime==1){
        printf("%d is a prime number",a);
    }else{
        printf("%d is not a prime number",a);
    }
    return 0;
}