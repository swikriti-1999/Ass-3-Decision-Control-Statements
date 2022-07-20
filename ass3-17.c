#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle");
    scanf("%d %d %d",&a,&b,&c);

    printf("\n Entered side of triangle are : %d %d %d",a,b,c);

    if(a+b>c && a+c>b && b+c>a)
        printf("\n A triangle is possible ");
    else
        printf("\n Trianle is not possible");
return 0;
}