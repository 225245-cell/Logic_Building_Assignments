// Write a program which accept string from user and count number of white spaces

#include <stdio.h>
int CountWhite(char *str)
{
    if ((NULL == str) || (*str == '\0'))
    {
        printf("String is Empty:");
        return -1;
    }
    int iCnt = 0, iCount = 0;
    for (iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if ((str[iCnt] == ' '))
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter the string:");
    scanf("%[^'\n']s", arr);

    iRet=CountWhite(arr);
    printf("There are %d Whitespaces",iRet);

    return 0;
}