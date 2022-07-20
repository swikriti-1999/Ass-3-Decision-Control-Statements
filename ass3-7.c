#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("\n Eneter the value of a");
    scanf("%d",&a);
    printf("\n Eneter the value of b");
    scanf("%d",&a);
    printf("\n Eneter the value of c");
    scanf("%d",&a);

    printf("\n Entered quadratic equation value for a=%d b=%d c=%d",a,b,c);

    D=b*b-4*a*c;

    if(D>0)
        printf("\n quadratic is Real and Distict");
    else
    if(D=0)
        printf("\n quadratic is Real and Equal");
    else
    if(D<0)
        printf("\n quadratic equation is Imaginary");

return 0;


}