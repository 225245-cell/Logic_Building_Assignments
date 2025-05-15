// 5. Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

#include <stdio.h>

int CountDiff(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0, iCnt = 0, iEvenSum = 0 , iOddSum = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if ((iDigit%2 )== 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit; 
        }
        iNo = iNo / 10;
    }
    return (iEvenSum - iOddSum);
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the Number :");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("%d", iRet);

    return 0;
}