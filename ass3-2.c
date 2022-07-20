#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    printf("\n entered number is %d",x);
    if (x%5==0)
        printf(" entered number is divisible bye 5");
    else
        printf(" entered number is not divisible by 5");
    return 0;
    
}