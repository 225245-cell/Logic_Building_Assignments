// Accept character from user check whether it is small case or not 

#include <stdio.h>
#include <stdbool.h>

bool ChkAlpha(char ch)
{
    if ((ch >= 'a') && (ch <= 'z') )
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
        printf("%c is small case letter.\n", cValue);
    }
    else
    {
        printf("%c is not small case letter.\n", cValue);
    }
    return 0;
}
