#include<stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if(100<=x && x<=999)
      printf("\n entered number %d is 3-digit number",x);
    else
      printf("\n entered number %d is not a 3-digit number",x);
    return 0;
}