//Write a program which accept string from user and count number of small characters.

#include <stdio.h>
int CountSmall(char *str)
{
    if((NULL == str) || (*str == '\0'))
    {
        printf("String is Empty:");
        return -1;
    }
    int iCnt = 0, iCount = 0;
    for (iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if ((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
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

    iRet = CountSmall(arr);
    printf("Count of Small letters in the string is :%d\n", iRet);

    return 0;
}