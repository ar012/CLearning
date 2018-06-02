#include<stdio.h>
int main()
{
    int a;
    printf("\n Please enter a number= ");
    scanf("%d", &a);
    if (a==9)
    {
        printf("\n This is nine and this is true %d", a);
    }
    else
    {
        printf("\n Your input number is %d",a);
    }
    return 0;
}
