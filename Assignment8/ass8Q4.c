//Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))
#include<stdio.h>
double FHtoCs(float fTemp)
{
    return (fTemp - 32) * (5.0/ 9.0);
}
int main()
{
    float iValue=0.0;
    double iRet=0.0;

    printf("Enter the temperature in fahrenheit: ");
    scanf("%f",&iValue);

    iRet=FHtoCs(iValue);
    printf("%f FH =%f CS",iValue,iRet);
    return 0;
}