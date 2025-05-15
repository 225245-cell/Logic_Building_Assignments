/*accept the amount in us dollar and return corresponding value in Indian currency
consider 1$ = 70 rupees 
no loop...so time compexity cannot be calculated*/
#include<stdio.h>

int DollarToINR(int iNo)
{
    iNo = iNo * 70;

    return iNo;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number in USD: ");
    scanf("%d",&iValue);
    iRet=DollarToINR(iValue);
    printf("value in INR: %d",iRet);

    return 0;
}