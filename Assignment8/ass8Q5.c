//Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)
#include<stdio.h>
double SquareMeter(int iValue)
{
    return iValue * 0.092903;
}
int main()
{
    int iValue=0;
    double iRet=0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    iRet=SquareMeter(iValue);
    printf("%d Square Feet =%f Square Meter",iValue,iRet);
    return 0;
}