// Write a program which accept string from user and print it in reverse order

#include <stdio.h>

void Display(char *str)
{
    if ((NULL == str) || (*str == '\0'))
    {
        printf("String is Empty:");
        return ;
    }
    int iSize = 0, iCnt = 0;
    char *rev=str;
    while (*str != '\0')
    {
        iSize++;
        str++;
    }
    for (iCnt = (iSize-1); iCnt >= 0; iCnt--)
    {
        printf("%c",rev[iCnt]);
    }
}
int main()
{
    char arr[20];

    printf("Enter the string:");
    scanf("%[^'\n']s", arr);

    Display(arr);
    return 0;
}