//Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)
#include<stdio.h>
#define PI 3.14
double CircleArea(float fRadius)
{
    return PI * (fRadius * fRadius);
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter the Radius: ");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("Area Of Circle is: %f ",dRet);
    return 0;
}