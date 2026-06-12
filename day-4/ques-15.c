#include<stdio.h>
int main(){
    int n,temp,rem,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp = n;
    while(temp!=0){
        rem = temp % 10;
        sum = sum + rem*rem*rem;
        temp=temp/10;
    }
    if(sum==n){
        printf("%d is an armstrong number",n);
    }else{
        printf("%d is not an armstrong number",n);
    }
    return 0;
}