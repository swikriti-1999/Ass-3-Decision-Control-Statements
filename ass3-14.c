#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%7==0)
     printf("\n entered number %d is divisible by 7",x);
    else 
    if(x%3==0)
     printf("\n entered number %d is divisible by 3",x);
    else 
     printf("entered number %d is neither divisible by 7 nor by 3",x);
     return 0;
}