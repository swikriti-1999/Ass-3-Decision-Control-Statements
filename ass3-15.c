#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x>0)
     printf("\n entered number %d is a positive number",x);
    else
    if(x<0)
     printf("\n eneterd number %d is negative number",x);
    else
     printf("\n entered number %d is 0",x);
    return 0;
    
}