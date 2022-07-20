#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three differrent numbers number");
    scanf("%d %d %d",&a,&b,&c);
    printf("\n entered number is %d %d %d",a,b,c);
    if(a>=b && a>=c)
      printf(" greatest number is %d",a);
    else
    if(b>=a && b>=c)
      printf(" greatest number is %d",b);
    else
      printf(" greatest number is %d",c);
   return 0; 
}