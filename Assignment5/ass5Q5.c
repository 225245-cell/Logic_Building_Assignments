//write the program which accepts number from user and print  all odd numbers upto n
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt = 0;
    
    printf("Multiples of %d are: ",iNo);
    for(iCnt=1;iCnt<=5;iCnt++)
    {
        printf("%d ",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number: ");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);

    return 0;
}