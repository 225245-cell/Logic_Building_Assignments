// Write a program which accept string from user and display only digits from that string.

#include <stdio.h>
void Display(char *str)
{
    if ((NULL == str) || (*str == '\0'))
    {
        printf("String is Empty:");
        return;
    }
    int iCnt = 0;
    for (iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if ((str[iCnt] >= '0') && (str[iCnt] <= '9'))
        {
            printf("%c",str[iCnt]);
        }
        
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