#include<stdio.h>

int main()
{
    float a,b,result;

    printf("enter two number:");
    scanf("%f %f",&a,&b);

    result = a / b;

    printf("division = %.2f",result);

    return 0;
}