//write the program which accepts number from user and print  all odd numbers upto n
#include<stdio.h>

void OddDisplay(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt = 0;

    printf("Odd numbers upto %d are: ",iNo);
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iCnt%2) != 0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the Number: ");
    scanf("%d",&iValue);
    OddDisplay(iValue);

    return 0;
}