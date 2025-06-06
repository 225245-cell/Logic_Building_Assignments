// . Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
#include <stdio.h>
void Display(char ch)
{
    printf("Decimal\t\t%d\nOctal\t\t%o\nHexadeciaml\t%x\n", ch);
}
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    Display(ch);

    return 0;
}