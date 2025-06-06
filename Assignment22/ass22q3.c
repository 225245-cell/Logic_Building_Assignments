// Accept character from user check whether it is Digit or not 

#include <stdio.h>
#include <stdbool.h>

bool ChkAlpha(char ch)
{
    if ((ch >= '0') && (ch <= '9') )
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
        printf("%c is Digit.\n", cValue);
    }
    else
    {
        printf("%c is not digit.\n", cValue);
    }
    return 0;
}
