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

return 0;
}

    
