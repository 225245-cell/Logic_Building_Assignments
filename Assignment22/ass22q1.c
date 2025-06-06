// Accept character from user check whether it is alphabet or not 

#include <stdio.h>
#include <stdbool.h>

bool ChkAlpha(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
    {
        return true;
    }
    return false;
}

int main()
{
    char cValue='\0';
    bool bRet = false;
    printf("Enter a character: ");
    scanf("%c", &cValue);

    bRet=ChkAlpha(cValue);
    if(true == bRet)
    {
        printf("%c is an alphabet.\n", cValue);
    }
    else
    {
        printf("%c is not an alphabet.\n", cValue);
    }
    return 0;
}
