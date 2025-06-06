/*4. Write a program which accept string from user and accept one character. 
Return index of last occurrence of that character.
*/

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iLoc = -1;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char Arr[50];
    char cValue;
    int iRet = 0;

    printf("Enter String: ");
    scanf(" %[^\n]s", Arr);  // Reads full line with spaces

    printf("Enter Character: ");
    scanf(" %c", &cValue);  // Space before %c skips newline

    iRet = LastChar(Arr, cValue);

    printf("Character Location is: %d\n", iRet);

    return 0;
}
