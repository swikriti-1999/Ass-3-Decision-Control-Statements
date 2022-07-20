#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter frst number",num1);
    scanf("%d",&num1);

    printf("\n enter second number",num2);
    scanf("%d",&num2);

    if(num1>num2)
      printf("\n entered number %d is greater",num1);
    else 
    if(num2>num1)
      printf("\n entered numebr %d is greater",num2);
    else
      printf("\n entered number %d are equal",num1);
    return 0;
}