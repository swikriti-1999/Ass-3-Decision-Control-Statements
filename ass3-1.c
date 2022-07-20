#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    printf("\n entered number is %d",x);
    if (x>0)
        printf("\nentered number is positive");
    else
        printf("\nentered number is non positive");
    return 0;
    
}