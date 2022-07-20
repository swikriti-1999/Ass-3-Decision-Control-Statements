#include<stdio.h>
int main()
{
    int n,x;
    printf("enter a number");
    scanf("%d",&n);
    printf("\n entered number is %d",n);

    x=n&1;

    if(x==0)
        printf(" \n Entered number is even");
    else
        printf("\n Entered numebr is odd");
    
return 0;    
}