// Accept character from user check whether it is capital or not 

#include <stdio.h>
#include <stdbool.h>

bool ChkAlpha(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z') )
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
        printf("%c is Capital letter.\n", cValue);
    }
    else
    {
        printf("%c is not Capital letter.\n", cValue);
    }
    return 0;
}
