/*1.Write a program which accept string from user and 
copy the contents of that string into another string. 
(Implement strcpy() function)

Input:"Marvellous Multi OS"
Output:"Marvellous Multi OS"*/
#include<stdio.h>
#include<stdlib.h>

void StrNCpyX( char *src, char *dest,int iCnt)
{
    
    while(*src != '\0' && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    StrNCpyX(arr,brr,10);

    printf("%s",brr);

    return 0;
}