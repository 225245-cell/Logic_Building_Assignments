/*5. Write a program which 2 strings from user and 
concat second string after first string. (Implement strcat() function).
*/

#include<stdio.h>
#include<stdlib.h>

void StrNCpyCap( char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >='a') && (*src <='z'))
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