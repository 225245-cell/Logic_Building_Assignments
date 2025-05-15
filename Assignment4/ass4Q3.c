//write the program accept the number from user and display non-factors 
#include<stdio.h>
void NonFact(int iNo)
{
    int iCnt = 0;
    int iNonFact = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    NonFact(iValue);
    
    return 0;
}