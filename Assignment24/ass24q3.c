// Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

#include <stdio.h>
int Difference(char *str)
{
    if((NULL == str) || (*str == '\0'))
    {
        printf("String is Empty:");
        return -1;
    }
    int iCnt = 0, iCount = 0, iCapCount = 0, iSmallCount = 0;
    for (iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if ((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        {
            iCapCount++;
        }
        if ((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
        {
            iSmallCount++;
        }
    }
    return ( iSmallCount - iCapCount );
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string:");
    scanf("%[^'\n']s", arr);

    iRet = Difference(arr);
    printf("Difference is  :%d\n", iRet);

    return 0;
}