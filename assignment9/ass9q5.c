// 5. Write a program which accept number from user and count frequency of such a digits which are less than 6.

#include <stdio.h>


int Count(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0, iCnt = 0, iFreq = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit <6)
        {
            iFreq++;
        }

        iNo = iNo / 10;
    }
    return iFreq ;
}
int main()
{
    int iValue = 0;
    int bRet = 0;
    printf("Enter the Number :");
    scanf("%d", &iValue);

    bRet = Count(iValue);
    printf("%d ",bRet);

    return 0;
}