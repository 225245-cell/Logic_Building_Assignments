/*write the program which accepts number from user and display below pattern
input : 5
output: * * * * * # # # # # 
*/
#include<stdio.h>

void Display(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt = 0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("* ");
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" # ");
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