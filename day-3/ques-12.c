#include<stdio.h>
int main(){
    int a,b,x,y,GCD,LCM;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    x=a;
    y=b;
    while(y!=0){
        int temp=y;
        y=x%y;
        x=temp;
    }
    GCD=x;
    LCM=(a*b)/GCD;
    printf("GCD is %d\n",GCD);
    printf("LCM is %d\n",LCM);
    return 0;
}