// 3. Write a program which accept number from user and count the frequency of 2.

#include <stdio.h>
#include <stdbool.h>

int TwoFreq(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    int iDigit = 0, iCnt = 0, iFreq = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 2)
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

    bRet = TwoFreq(iValue);
    printf("%d containS %d times 2 \n", iValue, bRet);

    return 0;
}