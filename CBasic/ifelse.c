#include<stdio.h>
int main()
{
    int a, b;
    printf("\n Enter your first number, a=");
    scanf("%d",&a);
    printf("\n Enter your second number, b=");
    scanf("%d",&b);
    if(a==b)
    {
        printf("The numbers a=%d and b=%d are equal\n", a,b);
        printf("This is if statement output.");
    }
    else
        printf("The numbers a=%d and b=%d are not equal", a, b);
    return 0;
}
