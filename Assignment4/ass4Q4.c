//write the program accept the number from user and return summation of non-factors 
#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt) != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number: ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("Summation of Non-Factors of %d is: %d\n",iValue,iRet);
    
    return 0;
}