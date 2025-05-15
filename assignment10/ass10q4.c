// 4. Write a program which accept number from user and return multiplication of all digits.

#include <stdio.h>

int MultDigits(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0, iCnt = 0, iMult = 1;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit > 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}
int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter the Number :");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);
    printf("%d", iRet);

    return 0;
}