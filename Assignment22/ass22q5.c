#include <stdio.h>
void DisplaySchedule(char chDiv)
{
    if (chDiv == 'A' || chDiv == 'a')
    {
        printf("Your Exam is at 7 AM ");
    }
    else if (chDiv == 'B' || chDiv == 'b')
    {
        printf("Your Exam is at 8.30 AM ");
    }
    else if (chDiv == 'C' || chDiv == 'c')
    {
        printf("Your Exam is at 9.20 AM ");
    }
    else if (chDiv == 'D' || chDiv == 'd')
    {
        printf("Your Exam is at 10.30 AM ");
    }
    else
    {
        printf("Invalid Division\n");
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter Your Division: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);
    return 0;
}