// 2. Write a program which accept number from user and check whether it contains 0 in it or not.

#include <stdio.h>
#include <stdbool.h>

bool ChkZero(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0 , iCnt = 0;
    bool bFlag = false;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            bFlag = true;
        }

        iNo = iNo / 10;
    }
    return bFlag;
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the Number :");
    scanf("%d", &iValue);

    bRet=ChkZero(iValue);
    if(bRet == true)
    {
        printf("%d contains 0", iValue);
    }
    else{
        printf("%d does not contain 0", iValue);
    }
    return 0;
}