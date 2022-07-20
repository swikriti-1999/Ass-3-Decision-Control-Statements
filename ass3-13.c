#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(x%3==0 && x%2==0)
      printf("\n enter number %d is divisible by 3 and 2",x);
    else
     printf("\n entered number %d is not divisible 3 and 2",x);
    return 0;
}