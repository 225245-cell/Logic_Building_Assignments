/*2. Write a program which accept string from user and accept one character. 
Return frequency of that character.
*/

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String: ");
    scanf("%[^'\n']s", Arr);  
    printf("Enter Character: ");
    scanf(" %c", &cValue);  
    iRet = CountChar(Arr, cValue);

    printf("Frequency Of Character is: %d",iRet);

    return 0;
}

