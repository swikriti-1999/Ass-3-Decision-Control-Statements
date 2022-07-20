#include<stdio.h>
int main()
{
    float cp,sp,p,l;
    printf("\n enter cost price");
    scanf("%f",&cp);
    // printf("\n cost price is %d",cp);
    printf("\n enter selleing price");
    scanf("%f",&sp);
    // printf("\n selleing price is %d",sp);
    
    if(sp-cp>0)
      {
        p=(sp-cp)/cp*100;
        printf("\n its a profit and profit percentage is %f",p);
      }
    else 
    if(cp-cp<0)
      {
        l=(cp-sp)/cp*100;
        printf("\n its a loss and loss percentage is %f",l);
      }
    else
       printf("\n there is no profit no loss");
    return 0;
    
}