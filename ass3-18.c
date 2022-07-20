#include<stdio.h>
int main()
{
    int x;
    printf("\n Enter the month number");
    scanf("%d",&x);

    if(x>12)
        printf("There are only 12 months");
    else
    if(x==1 || x==3 || x==7 || x==8 || x==10 || x==12)
        printf("\n This Month consists of 31 days");
    else
    if(x==2)
        printf("\n This Months consists of 28 in non leap year nd 29 in leap year");
    else
        printf("\n This Month consists of 30 days");
return 0;
}