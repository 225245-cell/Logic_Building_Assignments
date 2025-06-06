/*3.Write a program which accept string from user and 
accept one character. Return index of first occurrence of that character.

Input:"Marvellous Multi OS"
Output: 4
*/

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0;
    int iLoc = -1;
    while(*str != '\0')
    {
        if(*str == ch && iLoc == -1)
        {
            iLoc = iCnt;
        }
        str++;
        iCnt++;
    }
    return iLoc;
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
    iRet = FirstChar(Arr, cValue);

    printf("Character Location is: %d",iRet);

    return 0;
}

