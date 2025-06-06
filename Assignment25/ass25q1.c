//Write a program which accept string from user and convert it into lower case.

#include <stdio.h>
void strlwrx(char *str)
{
    if((NULL == str) || (*str == '\0'))
    {
        printf("String is Empty:");
        return ;
    }
    int iCnt = 0;
    for (iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if ((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        {
            str[iCnt] = str[iCnt] + 32;
        }
        
    }
    
}
int main()
{
    char arr[20];

    printf("Enter the string:");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);
    printf("Modified String is %s", arr);
    
    return 0;
}