#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter the marks out of 100");
    printf("\n sub1 : ");
    scanf("%d",&sub1);
    printf("\n sub2 : ");
    scanf("%d",&sub2);
    printf("\n sub3 : ");
    scanf("%d",&sub3);
    printf("\n sub4 : ");
    scanf("%d",&sub4);
    printf("\n sub5 : ");
    scanf("%d",&sub5);

    if(sub1<33 || sub2<33 || sub3<33 || sub4<33 || sub5<33)
        printf("\n Sudented is failed");
    else
        printf("\n Student is passes in all the subjects");
return 0;
}