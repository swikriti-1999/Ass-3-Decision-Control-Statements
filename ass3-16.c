#include<stdio.h>
int main()
{
   char ch;
   printf("enter a character: ");
   scanf("%c",&ch);

   if(ch>='a'&&ch<='z')
        printf("\n lower case");
   else
    if(ch>='A'&&ch<='Z')
        printf("\n Uppercase");
    else
    if(ch>='0'&&ch<='9')
        printf("\n Its a Digit");
    else
        printf("\n Its a special character");
return 0;
}

    
