// Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

#include <stdio.h>
#include <stdbool.h>
bool ChkVowel(char *str)
{
    if ((NULL == str) || (*str == '\0'))
    {
        printf("String is Empty:");
        return -1;
    }

    int iCnt = 0;
    for (iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if ((str[iCnt] == 'A') || (str[iCnt] == 'a') || (str[iCnt] == 'E') || (str[iCnt] == 'e') || (str[iCnt] == 'I') || (str[iCnt] == 'i') || (str[iCnt] == 'O') || (str[iCnt] == 'o') || (str[iCnt] == 'U') || (str[iCnt] == 'u') )
        {
            return true;
        }
    }
    return false;
}
int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter the string:");
    scanf("%[^'\n']s", arr);

    bRet = ChkVowel(arr);
    if (true == bRet)
    {
        printf("It Contains Vowel");
    }
    else
    {
        printf("It Does not Contains Vowel");
    }

    return 0;
}