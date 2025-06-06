/*
Accept Character from user and check whether it is special symbol or not
(!, @, #, $, %, ^, &, *).
Input: %
Output: TRUE
Input: d
Output: FALSE
*/

#include <stdio.h>
#include <Stdbool.h>

bool ChkSpecial(char ch)
{

    if ((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue = '\0';
    bool bRet=false;
    printf("Enter the character: ");
    scanf("%c", &cValue);

    bRet=ChkSpecial(cValue);
    if(true==bRet)
    {
        printf("%c is special character \n", cValue);
    }
    else{
        printf("%c is not a special character\n",cValue);
    }
    return 0;
}