/*1.Write a program which accept string from user and 
copy the capital letters */
#include<stdio.h>
#include<stdlib.h>

void StrNCpyCap( char *src, char *dest)
{
    
    while(*src != '\0')
    {
        if((*src >='A') && (*src <='Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];
    
    StrNCpyCap(arr,brr);

    printf("%s",brr);

    return 0;
}