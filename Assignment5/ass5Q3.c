//write the program which accepts number from user and print its number line
#include<stdio.h>

void Display(int iNo)
{
    if(iNo>0)
    {
        iNo=-iNo;
    }
    int iCnt = 0;
    for(iCnt=iNo;iCnt<=(-iNo);iCnt++)
    {
        printf("%d ",iCnt);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Number: ");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}